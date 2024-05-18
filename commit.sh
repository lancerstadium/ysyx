#!/bin/bash

# 获取输入的commit信息，若没有输入则使用当前日期作为commit信息
if [ -z "$1" ]; then
  commit_message=$(date)
else
  commit_message=$(date)+$1
fi

# 提交commit
git add .
git commit -m "$commit_message"
git push

echo "Commit message: $commit_message"
