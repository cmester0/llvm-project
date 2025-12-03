#ifndef LLVM_LIB_TARGET_PIET_MCTARGETDESC_PIETMCTARGETDESC_H
#define LLVM_LIB_TARGET_PIET_MCTARGETDESC_PIETMCTARGETDESC_H

#include "llvm/Support/DataTypes.h"
#include "llvm/MC/MCInstrDesc.h"
#include <memory>
#include <string>

namespace llvm {
/* class formatted_raw_ostream; */
/* class MCAsmBackend; */
/* class MCCodeEmitter; */
/* class MCContext; */
/* class MCInstrInfo; */
/* class MCInstPrinter; */
/* class MCObjectTargetWriter; */
/* class MCObjectWriter; */
/* class MCRegisterInfo; */
class MCSubtargetInfo;
/* class MCStreamer; */
/* class MCTargetOptions; */
/* class MCRelocationInfo; */
/* class MCTargetStreamer; */
class StringRef;
class Target;
class Triple;
}

namespace llvm {
  namespace PIET_MC {
    MCSubtargetInfo *createPietMCSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
  }
}

#endif
