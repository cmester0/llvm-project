// in clang/lib/Basic/Targets/Piet.h
#pragma once
#include "clang/Basic/TargetInfo.h"
#include "llvm/TargetParser/Triple.h"

namespace clang {
namespace targets {

class PietTargetInfo : public TargetInfo {
public:
  PietTargetInfo(const llvm::Triple &Triple, const TargetOptions &Opts)
    : TargetInfo(Triple) {
      // Example: little-endian, 32-bit pointers
      resetDataLayout("e-p:32:32-i32:32");
      LongWidth = LongAlign = PointerWidth = PointerAlign = 32;
      IntWidth = IntAlign = 32;
      // Other type/ABI settings as needed…
    }
};

} // namespace targets
} // namespace clang
