#ifndef LLVM_TRANSFORMS_QCLHELLOWORLD_H
#define LLVM_TRANSFORMS_QCLHELLOWORLD_H

#include "llvm/IR/PassManager.h"
#include "llvm/ADT/Statistic.h"

namespace llvm{
    class QCLHelloWorldPass : public PassInfoMixin<QCLHelloWorldPass>{
        public:
            PreservedAnalyses run(Function &F, FunctionAnalysisManager &AM);
    };
}

#endif //LLVM_TRANSFORMS_QCLHELLOWORLD_H