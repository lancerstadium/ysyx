import os
os.environ['KMP_DUPLICATE_LIB_OK'] = 'True'
 
import json
import torch
import numpy as np
import matplotlib.pyplot as plt
from model import mobilenet_v3_large, mobilenet_v3_small
from torchvision.transforms import transforms
from torch.utils.data import DataLoader
import torchvision


def eval_ssd_mobilenet_v3_large(path='./MobileNetV3.pth'):
    # 获取 label
    try:
        json_file = open('./class_indices.json', 'r')
        classes = json.load(json_file)
    except Exception as e:
        print(e)
    
    # 预处理
    transformer = transforms.Compose([transforms.Resize(256),  # 保证比例不变，短边变为256
                                    transforms.CenterCrop(224),
                                    transforms.ToTensor(),
                                    transforms.Normalize([0.485, 0.456, 0.406], [0.229, 0.224, 0.255])])
    
    # 加载模型
    DEVICE = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
    net = mobilenet_v3_large(num_classes=10)
    net.load_state_dict(torch.load(path))
    net.to(DEVICE)
    
    # 加载数据
    testSet = torchvision.datasets.CIFAR10(root='./data', train=False, download=False, transform=transformer)
    testLoader = DataLoader(testSet, batch_size=12, shuffle=True)
    
    # 获取一批数据
    imgs, labels = next(iter(testLoader))
    imgs = imgs.to(DEVICE)
    
    # show
    with torch.no_grad():
        net.eval()
        prediction = net(imgs)  # 预测
        prediction = torch.max(prediction, dim=1)[1]
        prediction = prediction.data.cpu().numpy()
    
        plt.figure(figsize=(12, 8))
        for i, (img, label) in enumerate(zip(imgs, labels)):
            x = np.transpose(img.data.cpu().numpy(), (1, 2, 0))  # 图像
            x[:, :, 0] = x[:, :, 0] * 0.229 + 0.485  # 去 normalization
            x[:, :, 1] = x[:, :, 1] * 0.224 + 0.456  # 去 normalization
            x[:, :, 2] = x[:, :, 2] * 0.255 + 0.406  # 去 normalization
            y = label.numpy().item()  # label
            plt.subplot(3, 4, i + 1)
            plt.axis(False)
            plt.imshow(x)
            plt.title('R:{},P:{}'.format(classes[str(y)], classes[str(prediction[i])]))
        plt.show()
    
def eval_ssd_mobilenet_v3_small(path='./MobileNetV3.pth'):
    # 获取 label
    try:
        json_file = open('./class_indices.json', 'r')
        classes = json.load(json_file)
    except Exception as e:
        print(e)
    
    # 预处理
    transformer = transforms.Compose([transforms.Resize(256),  # 保证比例不变，短边变为256
                                    transforms.CenterCrop(224),
                                    transforms.ToTensor(),
                                    transforms.Normalize([0.485, 0.456, 0.406], [0.229, 0.224, 0.255])])
    
    # 加载模型
    DEVICE = torch.device("cuda:0" if torch.cuda.is_available() else "cpu")
    net = mobilenet_v3_small(num_classes=5)
    net.load_state_dict(torch.load(path))
    net.to(DEVICE)
    
    # 加载数据
    testSet = torchvision.datasets.CIFAR10(root='./data', train=False, download=False, transform=transformer)
    testLoader = DataLoader(testSet, batch_size=12, shuffle=True)
    
    # 获取一批数据
    imgs, labels = next(iter(testLoader))
    imgs = imgs.to(DEVICE)
    
    # show
    with torch.no_grad():
        net.eval()
        prediction = net(imgs)  # 预测
        prediction = torch.max(prediction, dim=1)[1]
        prediction = prediction.data.cpu().numpy()
    
        plt.figure(figsize=(12, 8))
        for i, (img, label) in enumerate(zip(imgs, labels)):
            x = np.transpose(img.data.cpu().numpy(), (1, 2, 0))  # 图像
            x[:, :, 0] = x[:, :, 0] * 0.229 + 0.485  # 去 normalization
            x[:, :, 1] = x[:, :, 1] * 0.224 + 0.456  # 去 normalization
            x[:, :, 2] = x[:, :, 2] * 0.255 + 0.406  # 去 normalization
            y = label.numpy().item()  # label
            plt.subplot(3, 4, i + 1)
            plt.axis(False)
            plt.imshow(x)
            plt.title('R:{},P:{}'.format(classes[str(y)], classes[str(prediction[i])]))
        plt.show()


if __name__ == '__main__':
    eval_ssd_mobilenet_v3_small()