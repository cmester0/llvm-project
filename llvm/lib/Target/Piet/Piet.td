//===-- Piet.td - Top-level TableGen file for Piet target ----------*- tablegen -*-===//
//
// This file describes the Piet target for LLVM.
//===----------------------------------------------------------------------===//

include "llvm/Target/Target.td"
include "PietRegisterInfo.td"
// include "PietInstrInfo.td"   // uncomment when you add instructions

// Define a target
def Piet : Target {

}

// def RISCV : Target {
//   let InstructionSet = RISCVInstrInfo;
//   let AssemblyParsers = [RISCVAsmParser];
//   let AssemblyWriters = [RISCVAsmWriter];
//   let AllowRegisterRenaming = 1;
// }
