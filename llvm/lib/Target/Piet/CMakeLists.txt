add_llvm_component_group(Piet)

set(LLVM_TARGET_DEFINITIONS Piet.td)

tablegen(LLVM PietGenRegisterInfo.inc -gen-register-info)
# tablegen(LLVM PietGenInstrInfo.inc  -gen-instr-info)
# tablegen(LLVM PietGenSubtargetInfo.inc -gen-subtarget)
# other tablegen invocations if needed

add_public_tablegen_target(PietCommonTableGen)

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

add_subdirectory(TargetInfo)
add_subdirectory(MCTargetDesc)
