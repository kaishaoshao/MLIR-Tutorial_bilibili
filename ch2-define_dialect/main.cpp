///----------------------------------------------------------///
/// @file main.cpp
/// @brief Example of defining a dialect
///----------------------------------------------------------///
#include "Dialect/Softmax/SoftmaxDialect.h"

#include <mlir/IR/DialectRegistry.h>
#include <mlir/IR/MLIRContext.h>

void CH2() {
    // Create a context and register the Softmax dialect
    mlir::DialectRegistry registry;
    mlir::MLIRContext context(registry);
    //>print(llvm::outs());
    auto dialect = context.getOrLoadDialect<mlir::Softmax::SoftmaxDialect>();
    dialect->SayHello();
}

int main() { 
    CH2();
    return 0;
}

