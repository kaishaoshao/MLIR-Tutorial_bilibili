#!/bin/bash

# git submodule update --init --recursive

# Build the project
mkdir -p build
cmake  -G "Ninja" -B build -S ./
ninja $1 -C ./build
output=$(find ./build -name "$1")
$output
