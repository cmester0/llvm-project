//===-- Piet.td - Top-level TableGen file for Piet target ----------*- tablegen -*-===//
//
// This file describes the Piet target for LLVM.
//===----------------------------------------------------------------------===//

include "llvm/Target/Target.td"
// include "PietRegisterInfo.td"
// include "PietInstrInfo.td"   // uncomment when you add instructions

// Define a target
def Piet : Target {
  let ShortName = "piet";
  let DataLayout = "e-m:e-p:32:32-i32:32-f32:32:32";  // example layout
  let PointerSize = 32;  // example pointer size in bits
  let HasLittleEndian = 1;  // example endianness
  let UseSEH = 0;
  let RequiresRegisterScavenging = 0;
  let UsesTOC = 0;
}