///----------------------------------------------------------///
/// @file main.cpp
/// @brief Example of defining a dialect
///----------------------------------------------------------///
#include "Dialect/Softmax/SoftmaxDialect.h"

#include <mlir/IR/DialectRegistry.h>
#include <mlir/IR/MLIRContext.h>

void CH2() {
    // Create a context and register the Softmax dialect
    // 初始化方言注册器
    mlir::DialectRegistry registry;
    // 初始化上下文环境
    mlir::MLIRContext context(registry);
    //>print(llvm::outs());
    // 加载/注册方言
    auto dialect = context.getOrLoadDialect<mlir::Softmax::SoftmaxDialect>();
    dialect->SayHello();
}

int main() {
    CH2();
    return 0;
}

