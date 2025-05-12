# 定义一个变量
set(LLVM_TARGET_DEFINITIONS SoftmaxDialect.td)
# 生成头文件 
mlir_tablegen(SoftmaxDialect.h.inc --gen-dialect-defs -dialect=Softmax)
# 生成源文件
mlir_tablegen(SoftmaxDialect.cpp.inc --gen-dialect-defs -dialect=Softmax)

add_pulibc_tablegen_target