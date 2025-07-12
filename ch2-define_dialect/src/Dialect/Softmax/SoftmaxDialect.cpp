//-----------------------------------------------------------------------------//
// Softmax dialect
//-----------------------------------------------------------------------------//

#include "Dialect/Softmax/SoftmaxDialect.h"

#include <llvm/Support/raw_ostream.h>


#define FIX
#include "Dialect/Softmax/SoftmaxDialect.cpp.inc"
#undef FIX

namespace mlir::Softmax {
    // 实现方言的初始化方法
    void SoftmaxDialect::initialize() {
        llvm::outs() << "Softmax dialect initialized"
                 << getDialectNamespace() <<"\n";
    }

    // 实现方言的析构函数
    void SoftmaxDialect::SayHello() {
      llvm::outs() << "Hello from Softmax dialect"
                 << getDialectNamespace() <<"\n";
    }

    SoftmaxDialect::~SoftmaxDialect() {
        llvm::outs() << "deconstruct Softmax dialect"
                 << getDialectNamespace() <<"\n";
    }

} // namespace mlir::Softmax
