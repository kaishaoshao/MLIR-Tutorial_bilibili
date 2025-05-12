#ifndef __SOFTMAX_DIALECT_
#define __SOFTMAX_DIALECT_

#include "mlir/IR/DialectBase.td"


// 
def SoftmaxDialect : Dialect{
  // The name of the dialect.
  // 方言的名字
  // string -》 let 覆盖原有的含义
  let name =  "Softmax";

  // Short summary of the dialect.
  // 方言的概述
  let summary = "summary of Softmax Dialect";

  // The description of the dialect.
  // 方言的详细描述
  let description = "description of Softmax Dialect";

  // A list of dialects this dialect will load on construction as dependencies.
  // These are dialects that this dialect may involve in canonicalization
  // pattern or interfaces.
  //  方言的依赖
  let dependentDialects = ["::mlir::Tensor::TensorDialect"];

  // A list of key/value pair representing an attribute type and a name.
  // This will generate helper classes on the dialect to be able to
  // manage discardable attributes on operations in a type safe way.
  // 用于生成比较标准的属性管理的代码 【4-7】
  let discardableAttrs = (ins);

  // The C++ namespace that ops of this dialect should be placed into.
  //
  // By default, uses the name of the dialect as the only namespace. To avoid
  // placing in any namespace, use "". To specify nested namespaces, use "::"
  // as the delimiter, e.g., given "A::B", ops will be placed in
  // `namespace A { namespace B { <ops> } }`.
  //
  // Note that this works in conjunction with dialect C++ code. Depending on how
  // the generated files are included into the dialect, you may want to specify
  // a full namespace path or a partial one.
  //  生成代码的命名空间
  let cppNamespace = "::mlir::Softmax";

  // An optional code block containing extra declarations to place in the
  // dialect declaration.
  // 额外的声明 原封不动将代码贴到代码中
  let extraClassDeclaration = [{
    static void sayHello();
  }];

  // If this dialect overrides the hook for materializing constants.
  // 规范化声明 【14】
  let hasConstantMaterializer = 0;

  /// If the dialect definition provides a non-default destructor.
  /// If false, a default destructor implementation will be generated.
  // 是否生成默认的析构函数
  let hasNonDefaultDestructor = 1;

  // If this dialect overrides the hook for verifying operation attributes.
  // 操作数的属性检验 【7】
  let hasOperationAttrVerify = 0;

  // If this dialect overrides the hook for verifying region argument
  // attributes.
  // RegionArg的属性检验 【7】
  let hasRegionArgAttrVerify = 0;

  // If this dialect overrides the hook for verifying region result attributes.
  // RegionResult的属性检验 【7】
  let hasRegionResultAttrVerify = 0;

  // If this dialect overrides the hook for op interface fallback.
  // 【6】
  let hasOperationInterfaceFallback = 0;

  // If this dialect should use default generated attribute parser boilerplate.
  // When set, ODS will generate declarations for the attribute parsing and
  // printing hooks in the dialect and default implementations that dispatch to
  // each individual attribute directly.
  // 是否使用MLIR默认的属性解析输出
  let useDefaultAttributePrinterParser = 0;

  // If this dialect should use default generated type parser boilerplate:
  // When set, ODS will generate declarations for the type parsing and printing
  // hooks in the dialect and default implementations that dispatch to each
  // individual type directly.
  // 是否使用MLIR默认的类型解析输出
  let useDefaultTypePrinterParser = 0;

  // If this dialect overrides the hook for canonicalization patterns.
  // 是否有规范化【14】
  let hasCanonicalizer = 0;

  // If this dialect can be extended at runtime with new operations or types.
  // 是否是扩展的方言
  let isExtensible = 0;

  // Whether inherent Attributes defined in ODS will be stored as Properties.
  // 
  let usePropertiesForAttributes = 1;
}

#endif // __SOFTMAX_DIALECT_