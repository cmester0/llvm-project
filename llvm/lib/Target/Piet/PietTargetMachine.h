//===-- PietTargetMachine.h - Define TargetMachine for Piet -------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file declares the Piet specific subclass of TargetMachine.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_PIET_PIETTARGETMACHINE_H
#define LLVM_LIB_TARGET_PIET_PIETTARGETMACHINE_H

#include "llvm/Target/TargetMachine.h"
#include "llvm/CodeGen/CodeGenTargetMachineImpl.h"
#include "llvm/Support/CodeGen.h"
#include "llvm/MC/TargetRegistry.h"
#include "llvm/ADT/StringRef.h"
#include "llvm/TargetParser/Triple.h"


/* #include "llvm/Target/TargetSubtargetInfo.h" */

namespace llvm {

  /* class PietSubtarget : public TargetSubtargetInfo; */
/* public: */
/*   PietSubtarget(const Triple &TT, StringRef CPU, StringRef FS, */
/*                 const PietTargetMachine &TM); */

/*   // stub implementations or defaults */
/*   void anchor() override; */

/*   // any other required virtual overrides (if needed) */
/* }; */


/* TargetMachine(T, DataLayoutString, TT, CPU, FS, Options) */

class PietTargetMachine : public CodeGenTargetMachineImpl {
  /* PietSubtarget Subtarget; */

public:
    PietTargetMachine(
      const Target &T, const Triple &TT,
      StringRef CPU, StringRef FS,
      const TargetOptions &Options,
      std::optional<Reloc::Model> RM,
      std::optional<CodeModel::Model> CM,
      CodeGenOptLevel OL, bool JIT);

    ~PietTargetMachine() override;

  /* const PietSubtarget *getSubtargetImpl(const Function &) const override; */

  /* const PietSubtarget *getSubtargetImpl() const override; */

};

}

#endif // LLVM_LIB_TARGET_PIET_PIETTARGETMACHINE_H
