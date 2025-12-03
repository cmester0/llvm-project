#include "PietTargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/Support/Compiler.h"

using namespace llvm;

Target &llvm::getThePietTarget() {
  static Target ThePietTarget;
  return ThePietTarget;
}


// extern "C" void LLVMInitializePietTargetInfo();
extern "C" void LLVMInitializePietTargetInfo() {
  RegisterTarget<Triple::UnknownArch, /* HasJIT */ false> X(
    getThePietTarget(), "piet", "Piet Custom Target", "Piet backend");
  // Triple::piet
}

// (Target &T, const char *Name,
//                                     const char *ShortDesc,
//                                     const char *BackendName,
//                                     Target::ArchMatchFnTy ArchMatchFn,
//                                     bool HasJIT)
