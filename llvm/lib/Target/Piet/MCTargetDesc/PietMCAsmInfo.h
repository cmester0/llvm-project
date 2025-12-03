#ifndef LLVM_LIB_TARGET_PIET_MCTARGETDESC_PIETMCASMINFO_H
#define LLVM_LIB_TARGET_PIET_MCTARGETDESC_PIETMCASMINFO_H

#include "llvm/MC/MCAsmInfo.h"
#include "llvm/MC/TargetRegistry.h"

class PietMCAsmInfo : public llvm::MCAsmInfo {
public:
  PietMCAsmInfo();
};

#endif
