add_llvm_component_group(Piet)

set(LLVM_TARGET_DEFINITIONS Piet.td)

tablegen(LLVM PietGenRegisterInfo.inc -gen-register-info)
tablegen(LLVM PietGenInstrInfo.inc  -gen-instr-info)
tablegen(LLVM PietGenSubtargetInfo.inc -gen-subtarget)
# other tablegen invocations if needed

add_public_tablegen_target(PietCommonTableGen)

# add_llvm_target(LLVMPiet
add_llvm_component_library(LLVMPiet
  PietTargetMachine.cpp
  PietInstrInfo.cpp
  PietRegisterInfo.cpp
  PietSubtarget.cpp

  LINK_COMPONENTS
    CodeGen
    Core
    Support
)

  # PietAsmPrinter.cpp
  # PietMCInstLower.cpp
  # PietInstPrinter.cpp
  # PietSubtarget.cpp
  # PietTargetMachine.cpp
  # PietISelDAGToDAG.cpp
  # PietISelLowering.cpp

  # DEPENDS
  # intrinsics_gen

  # LINK_COMPONENTS
  # AsmPrinter
  # CodeGen
  # Core
  # MC
  # MCParser
  # Support
  # Target
