import torch
import torch.nn as nn
import torch.optim as optim
from torchvision import transforms, datasets
from tqdm import tqdm
from model import mobilenet_v3_large, mobilenet_v3_small, MobileNetV3     # 导入 mobilenet v3
from torch.utils.data import DataLoader
from torchsummary import summary
 
# 打印网络信息
def net_info(net):
    summary(net, (3, 224, 224))

# 训练
def train(net: MobileNetV3, batch_size=16,lr=0.01,epochs=10,device=None):
    # 预处理
    data_transform = {
        "train": transforms.Compose([transforms.RandomResizedCrop(224),
                                     transforms.RandomHorizontalFlip(),
                                     transforms.ToTensor(),
                                     transforms.Normalize([0.485, 0.456, 0.406], [0.229, 0.224, 0.225])]),
        "test": transforms.Compose([transforms.Resize(256),
                                   transforms.CenterCrop(224),
                                   transforms.ToTensor(),
                                   transforms.Normalize([0.485, 0.456, 0.406], [0.229, 0.224, 0.225])])}
 
    # 载入训练集
    train_dataset = datasets.CIFAR10(root='./data', train=True,transform=data_transform['train'])  # 下载数据集
    train_loader = DataLoader(train_dataset, batch_size=batch_size, shuffle=True)  # 读取数据集
 
    # 载入测试集
    test_dataset = datasets.CIFAR10(root='./data', train=False,transform=data_transform['test'])  # 下载数据集
    test_loader = DataLoader(test_dataset, batch_size=batch_size, shuffle=False)  # 读取数据集
 
    # 样本个数
    num_train = len(train_dataset)  # 50000
    num_test = len(test_dataset)  # 10000
 
    # 网络模型
    net.to(device)
    loss_function = nn.CrossEntropyLoss()  # 定义交叉熵损失函数
 
    params = [p for p in net.parameters() if p.requires_grad]
    optimizer = optim.Adam(params, lr=lr)  # 定义优化器
 
    # train
    best_acc = 0.0
    for epoch in range(epochs):
        net.train()  # 开启dropout
        running_loss = 0.0
        for images, labels in tqdm(train_loader):
            images, labels = images.to(device), labels.to(device)
 
            optimizer.zero_grad()  # 梯度下降
            outputs = net(images)  # 前向传播
            loss = loss_function(outputs, labels)  # 计算损失
            loss.backward()  # 反向传播
            optimizer.step()  # 梯度更新
 
            running_loss += loss.item()
 
        # test
        net.eval()  # 关闭dropout
        acc = 0.0
        with torch.no_grad():
            for x, y in tqdm(test_loader):
                x, y = x.to(device), y.to(device)
                outputs = net(x)
                predicted = torch.max(outputs, dim=1)[1]
                acc += (predicted == y).sum().item()
 
        accurate = acc / num_test  # 计算正确率
        train_loss = running_loss / num_train  # 计算损失
 
        print('[epoch %d] train_loss: %.3f   test_accuracy: %.3f' %
              (epoch + 1, train_loss, accurate))
 
        if accurate > best_acc:
            best_acc = accurate
            torch.save(net.state_dict(),'./MobileNetV3.pth')



def train_ssd_mobilenet_v3_large():
    # 超参数
    DEVICE = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
    BATCH_SIZE = 16
    EPOCHS = 2
    LEARNING_RATE = 0.0001
 
    # mobilenet v3 迁移学习
    net = mobilenet_v3_large(num_classes=10)
    pre_model = torch.load('./pre/mobilenet_v3_large-8738ca79.pth')        # 加载预训练模型
    pre_dict = {k:v for k,v in pre_model.items() if 'classifier' not in k}      # 删除最后的全连接层
    missing_keys,unexpected_keys = net.load_state_dict(pre_dict,strict=False)   # 载入除了最后一层
 
    # 冻结特征提取层,只训练最后的全连接层，否则，整个网络都会训练
    for param in net.features.parameters():
        param.requires_grad = False
 
    # 训练
    train(net=net,batch_size=BATCH_SIZE,lr=LEARNING_RATE,epochs=EPOCHS,device=DEVICE)
    print('Finished Training....')



def train_ssd_mobilenet_v3_small():
    # 超参数
    DEVICE = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
    BATCH_SIZE = 16
    EPOCHS = 2
    LEARNING_RATE = 0.0001
 
    # mobilenet v3 迁移学习
    net = mobilenet_v3_small(num_classes=10)
    pre_model = torch.load('./pre/mobilenet_v3_small-047dcff4.pth')        # 加载预训练模型
    pre_dict = {k:v for k,v in pre_model.items() if 'classifier' not in k}      # 删除最后的全连接层
    missing_keys,unexpected_keys = net.load_state_dict(pre_dict,strict=False)   # 载入除了最后一层
 
    # 冻结特征提取层,只训练最后的全连接层，否则，整个网络都会训练
    for param in net.features.parameters():
        param.requires_grad = False
 
    # 训练
    train(net=net,batch_size=BATCH_SIZE,lr=LEARNING_RATE,epochs=EPOCHS,device=DEVICE)
    print('Finished Training....')



if __name__ == '__main__':
    train_ssd_mobilenet_v3_small()