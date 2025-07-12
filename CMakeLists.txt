cmake_minimum_required(VERSION 3.20)
project(MLIR_Tutorial)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# 设置安装路径
# CMAKE_INSTALL_PREFIX 内置变量
# 默认 /usr/local
# 当前设置为当前目录下的 install 文件夹
set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/install)

add_compile_options(-fPIC)

add_subdirectory(third)


add_subdirectory(ch2-define_dialect)

