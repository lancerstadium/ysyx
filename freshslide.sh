#!/bin/bash

# 循环处理每个 docs/slide 开头的文件夹
for folder in docs/slide*; do
    if [ -d "$folder" ]; then
        # 1. 删除 static 文件夹和 index.html 文件
        rm -rf "$folder/static"
        rm -f "$folder/index.html"

        # 2. 找到 slide.md 文件并执行 genslide.sh
        slide_file=$(find "$folder" -name slide.md)
        if [ -n "$slide_file" ]; then
            ./genslide.sh "$slide_file"
        fi

        # 3. 复制 dist 文件夹下的所有文件到当前文件夹
        dist_folder="$folder/dist"
        if [ -d "$dist_folder" ]; then
            cp -r "$dist_folder"/* "$folder"
        fi

        # 4. 删除 dist 文件夹
        rm -rf "$dist_folder"
    fi
done
