#include "PietMCTargetDesc.h"
#include "../TargetInfo/PietTargetInfo.h"

#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/MCCodeEmitter.h"
#include "llvm/MC/MCInstrInfo.h"
#include "llvm/MC/MCObjectWriter.h"
#include "llvm/MC/MCRegisterInfo.h"
#include "llvm/MC/MCStreamer.h"
#include "llvm/MC/MCSubtargetInfo.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/TargetParser/Triple.h"

// #include "llvm/DebugInfo/CodeView/CodeView.h"
// #include "llvm/MC/MCAsmBackend.h"
// #include "llvm/MC/MCCodeEmitter.h"
// #include "llvm/MC/MCELFStreamer.h"
// #include "llvm/MC/MCInstrAnalysis.h"
// #include "llvm/MC/MCInstrInfo.h"
// #include "llvm/MC/MCObjectWriter.h"
// #include "llvm/MC/MCRegisterInfo.h"
// #include "llvm/MC/MCStreamer.h"
// #include "llvm/MC/MCSubtargetInfo.h"
// #include "llvm/MC/TargetRegistry.h"
// #include "llvm/Support/Compiler.h"
// #include "llvm/Support/ErrorHandling.h"
// #include "llvm/TargetParser/Triple.h"

// #define GET_REGINFO_MC_DESC
// #include "PietGenRegisterInfo.inc"

// extern "C" void LLVMInitializePietTargetMC();

using namespace llvm;

static MCRegisterInfo *createPietMCRegisterInfo(const Triple &Triple) {
  MCRegisterInfo *X = new MCRegisterInfo();
  // InitPietMCRegisterInfo(X, ARM::LR, 0, 0, ARM::PC);
  // ARM_MC::initLLVMToCVRegMapping(X);

  return X;
}

extern "C" void LLVMInitializePietTargetMC() {
  // // At minimum:
  // TargetRegistry::RegisterMCAsmInfo(ThePietTarget, createPietMCAsmInfo);

  // Register the MC register info.
  TargetRegistry::RegisterMCRegInfo(getThePietTarget(), createPietMCRegisterInfo);
}
