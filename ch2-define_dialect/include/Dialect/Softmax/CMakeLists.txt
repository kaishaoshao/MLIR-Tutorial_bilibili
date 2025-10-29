# 定义一个变量
set(LLVM_TARGET_DEFINITIONS SoftmaxDialect.td)
# 生成SoftmaxDialect的声明
# 生成头文件
mlir_tablegen(SoftmaxDialect.h.inc -gen-dialect-decls -dialect=Softmax)
# 生成源文件
mlir_tablegen(SoftmaxDialect.cpp.inc -gen-dialect-defs -dialect=Softmax)
# 将生成的命令定义为target
add_public_tablegen_target(SoftmaxDialectIncGen${ch_num})