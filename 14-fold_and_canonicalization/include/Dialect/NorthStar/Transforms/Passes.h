//    Copyright 2025 时光丶人爱

//    Licensed under the Apache License, Version 2.0 (the "License");
//    you may not use this file except in compliance with the License.
//    You may obtain a copy of the License at

//        http://www.apache.org/licenses/LICENSE-2.0

//    Unless required by applicable law or agreed to in writing, software
//    distributed under the License is distributed on an "AS IS" BASIS,
//    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//    See the License for the specific language governing permissions and
//    limitations under the License.
//

#ifndef DIALECT_NORTH_STAR_TRANSFORMS_PASSES_H
#define DIALECT_NORTH_STAR_TRANSFORMS_PASSES_H
#include "mlir/Pass/Pass.h"
namespace mlir::north_star {

void populateDeviceRegionFusionPatterns(RewritePatternSet &patterns);

std::unique_ptr<::mlir::Pass> createApplyDistributeTransformPass();

#define GEN_PASS_DECL
#define GEN_PASS_REGISTRATION
#include "Dialect/NorthStar/Transforms/Passes.h.inc"
}  // namespace mlir::north_star

#endif  // DIALECT_NORTH_STAR_TRANSFORMS_PASSES_H