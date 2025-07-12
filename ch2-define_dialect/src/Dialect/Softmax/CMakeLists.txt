add_mlir_dialect_library(MLIRSoftmaxDialect${ch_num}
    SoftmaxDialect.cpp

    ADDITIONAL_HEADER_DIRS
    ${CMAKE_CURRENT_SOURCE_DIR}/../include/Dialect/Softmax

    DEPENDS
    SoftmaxDialectIncGen${ch_num}

    LINK_LIBS PUBLIC
    MLIRIR
    MLIRTensorDialect
)
