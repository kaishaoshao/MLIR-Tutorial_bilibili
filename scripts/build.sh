#!/bin/bash
set -e pipefail

mkdir -p build

if [[ "$1" == "--clean" ]]; then
    rm -rf build
    exit 0
fi


cmake -S . -B build -G Ninja && ninja -C build -j8