#!/bin/bash
# 获取当前脚本的路径
SCRIPT_PATH=$(dirname "$(readlink -f "$0")")
# 拼接工具路径
TOOL_DIR="$SCRIPT_PATH/../jyyslide-md"
TOOL_PATH="$TOOL_DIR/main.py"
# 判断是否输入了参数
if [ -z "$1" ]; then
  # 报错提示
  echo "请输入一个 .md 的文件路径作为参数"
else
  # 将参数转化为绝对路径
  ABSOLUTE_PATH=$(readlink -f "$1")
  # 判断参数是否为文件
  if [ -f "$ABSOLUTE_PATH" ]; then
    # 判断工具路径是否存在
    if [ -f "$TOOL_PATH" ]; then
      # 进入工具目录
      cd $TOOL_DIR
      echo "正在生成：$ABSOLUTE_PATH"
      # 运行工具
      poetry run python main.py "$ABSOLUTE_PATH"
      # 获取参数所在目录
      FILE_DIR=$(dirname "$ABSOLUTE_PATH")
      # 判断目录下是否存在dist文件夹
      if [ -d "$FILE_DIR/dist" ] && [ -n "$(ls -A $FILE_DIR/dist)" ]; then
        echo "生成成功：$FILE_DIR/dist"
      else
        echo "生成失败：$ABSOLUTE_PATH"
      fi
      # 还原工具目录
      cd $SCRIPT_PATH
    else
      # 报错提示
      echo "工具路径不存在：$TOOL_PATH"
    fi
  else
    # 报错提示
    echo "参数不是一个文件"
  fi
fi
