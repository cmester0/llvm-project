#include "PietMCTargetDesc.h"
#include "PietMCAsmInfo.h"
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

using namespace llvm;

static MCAsmInfo* createPietMCAsmInfo(const MCRegisterInfo &MRI,
                                      const Triple &TT,
				      const MCTargetOptions &Options) {
    PietMCAsmInfo* MAI = new PietMCAsmInfo();
    return MAI;
}

static MCRegisterInfo* createPietMCRegisterInfo(const Triple &TT) {
    MCRegisterInfo* MRI = new MCRegisterInfo();
    // Normally you would initialize with registers, but a minimal stub is okay
    return MRI;
}


MCSubtargetInfo* PIET_MC::createPietMCSubtargetInfo(
  const Triple &TT,
  StringRef CPU,
  StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, CPU, FS, {}, {}, {}, {}, {}, {}, {}, {}, {});
}

extern "C" void LLVMInitializePietTargetMC() {
  Target &Piet = getThePietTarget();

  // // At minimum:
  TargetRegistry::RegisterMCAsmInfo(Piet, createPietMCAsmInfo);

  // Register the MC register info.
  TargetRegistry::RegisterMCRegInfo(Piet, createPietMCRegisterInfo);

  // Register the MC subtarget info.
  TargetRegistry::RegisterMCSubtargetInfo(Piet, PIET_MC::createPietMCSubtargetInfo);
  
}
