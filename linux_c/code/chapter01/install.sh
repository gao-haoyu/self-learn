#!/bin/bash
target_file="./hello"

build(){
    if [ ! -f "$target_file" ];then
        make all
    fi
}

install(){
    echo "copy binary file to target path"
}

build
install
