#ifndef KLEE_TARGETFUNC_H
#define KLEE_TARGETFUNC_H

// #include "llvm/Support/CommandLine.h"
#include <string>

// extern llvm::cl::opt<std::string> TargetedFunctionName(std::string, std::string, std::string);
// ("targeted-function",llvm::cl::desc("Name of the function, that should be reached"), llvm::cl::init("-"));

// llvm::cl::opt<std::string>
        // TargetedFunctionName("targeted-function",
                             // llvm::cl::desc("Name of the function, that should be reached"),
                             // llvm::cl::init("-"));
extern std::string targFuncName;

#endif //KLEE_TARGETFUNC_H