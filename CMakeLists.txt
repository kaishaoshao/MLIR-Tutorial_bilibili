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
# CMAKE_CURRENT_BINARY_DIR 是当前构建目录
# CMAKE_MODULE_PATH 是 CMake 查找模块文件的路径列表
set(LLVM_DIR "${CMAKE_CURRENT_BINARY_DIR}/third/llvm-project")
list(APPEND LLVM_CMAKE_DIR "${LLVM_DIR}/llvm/lib/cmake/llvm")
list(APPEND MLIR_CMAKE_DIR "${CMAKE_CURRENT_BINARY_DIR}/lib/cmake/mlir")
list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
list(APPEND CMAKE_MODULE_PATH "${MLIR_CMAKE_DIR}")

# 包含各种CMake配置文件
include(TableGen)
include(LLVMConfig)
include(AddLLVM)
include(MLIRConfig)
include(AddMLIR)


# LLVM和MLIR的头文件加入项目的头文件搜索路径
include_directories(${LLVM_INCLUDE_DIRS})
include_directories(${MLIR_INCLUDE_DIRS})


add_subdirectory(ch2-define_dialect)

