set(LLVM_TARGET_DEFINTIONS SoftmaxTypes.td)
# 生成Softmax Dialect的声明
milr_tablegen(SoftmaxDialect.h.inc -gen-dialect-decls -dialect=Softmax)
# 生成Softmax Dialect的实现
milr_tablegen(SoftmaxDialect.cpp.inc -gen-dialect-defs -dialect=Softmax)
# 生成Softmax Type的声明
milr_tablegen(SoftmaxTypes.h.inc -gen-typedef-decls -dialect=Softmax)
# 生成Softmax Type的实现
milr_tablegen(SoftmaxTypes.cpp.inc -gen-typedef-def -dialect=north_star)
# 将生成命令定义为target
add_public_tablegen_target()
