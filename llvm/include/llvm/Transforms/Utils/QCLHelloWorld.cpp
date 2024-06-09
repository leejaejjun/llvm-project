#include "llvm/Transforms/Utils/QCLHelloWorld.h"
using namespace llvm;

#define DEBUG_TYPE "qcl-hello-world"

PreservedAnalyses QCLHelloWorldPass::run(Function &F, FunctionAnalysisManager &AM) {
// Implement your optimization here
    errs() << "Function Name: " << F.getName() << "\n";
    int numInstructions = 0;
    for (auto &BB : F) { // F: Functions ; B: Basic Block
        for (auto &I : BB) { // I: Instruction
            ++numInstructions;
        }   
    }
    errs() << "Number of instructions: " << numInstructions << "\n";
    return PreservedAnalyses::all();
}