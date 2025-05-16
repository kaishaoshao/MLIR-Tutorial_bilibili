//-----------------------------------------------------------------------------//
// Softmax dialect
//-----------------------------------------------------------------------------//

#include "Dialect/Softmax/SoftmaxDialect.h"

#include <llvm/Support/Printable.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/Support/raw_os_ostream.h>
#include <mlir/Dialect/Tensor/IR/Tensor.h>

#define FIX
#include "Dialect/Softmax/SoftmaxDialect.cpp.inc"
#undef FIX

namespace mlir {

namespace Softmax {
    void SoftmaxDialect::initialize() {
        llvm::outs() << "Softmax dialect initialized\n";
    }

    void SoftmaxDialect::SayHello() {
      llvm::outs() << "Hello from Softmax dialect\n";
    }

    SoftmaxDialect::~SoftmaxDialect() {
        llvm::outs() << "deconstruct Softmax dialect\n";
    }

} // namespace softmax

} // namespace mlir