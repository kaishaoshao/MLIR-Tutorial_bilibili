set(ch_num 2)

# CMAKE_CURRENT_BINARY_DIR 是当前构建目录
# CMAKE_MODULE_PATH 是 CMake 查找模块文件的路径列表
list(APPEND LLVM_CMAKE_DIR "${CMAKE_CURRENT_BINARY_DIR}/../third/llvm-project/llvm/lib/cmake/llvm")
list(APPEND MLIR_CMAKE_DIR "${CMAKE_CURRENT_BINARY_DIR}/../lib/cmake/mlir")
list(APPEND CMAKE_MODULE_PATH "${LLVM_CMAKE_DIR}")
list(APPEND CMAKE_MODULE_PATH "${MLIR_CMAKE_DIR}")

# 包含各种CMake配置文件
include(TableGen)
include(LLVMConfig)
include(MLIRConfig)
include(AddLLVM)
include(AddMLIR)

# LLVM和MLIR的头文件加入项目的头文件搜索路径
include_directories(${LLVM_INCLUDE_DIRS})
include_directories(${MLIR_INCLUDE_DIRS})

# CMAKE_CURRENT_SOURCE_DIR 源码路径
# CMAKE_CURRENT_BINARY_DIR 构建路径
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(${CMAKE_CURRENT_BINARY_DIR}/include)

add_subdirectory(include)
add_subdirectory(src)

add_executable(CH-${ch_num} "main.cpp")

target_link_libraries(CH-${ch_num} MLIRSoftmaxDialect${ch_num})
