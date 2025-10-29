#ifndef SOFTMAX_TYPES_H
#define SOFTMAX_TYPES_h

#include "mlir/Dialect/Tensor/IR/Tensor.h"
#include "mlir/IR/MLIRContext.h"
#define FIX
#define GET_TYPEDEF_CLASSES
#include "Dialect/Softmax/SoftmaxTypes.h.inc"
#undef FIX

#endif // SOFTMAX_TYPES_h
