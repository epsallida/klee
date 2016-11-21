//===-- UserSearcher.h ------------------------------------------*- C++ -*-===//
//
//                     The KLEE Symbolic Virtual Machine
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef KLEE_USERSEARCHER_H
#define KLEE_USERSEARCHER_H

// #include "llvm/Support/CommandLine.h"
// #include <string>


namespace klee {
  class Executor;
  class Searcher;

  // XXX gross, should be on demand?
  bool userSearcherRequiresMD2U();

  Searcher *constructUserSearcher(Executor &executor);
}

// extern llvm::cl::opt<std::string> TargetedFunctionName(std::string, std::string, std::string);
// ("targeted-function",llvm::cl::desc("Name of the function, that should be reached"), llvm::cl::init("-"));

// llvm::cl::opt<std::string>
//         TargetedFunctionName("targeted-function",
//                              llvm::cl::desc("Name of the function, that should be reached"),
//                              llvm::cl::init("-"));
#endif
