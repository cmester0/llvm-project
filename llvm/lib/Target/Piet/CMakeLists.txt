add_llvm_component_group(Piet)

set(LLVM_TARGET_DEFINITIONS Piet.td)

tablegen(LLVM PietGenRegisterInfo.inc -gen-register-info)

add_public_tablegen_target(PietCommonTableGen)

# add_llvm_component_library(LLVMPiet
#   PietTargetMachine.cpp
#   PietDesc
#   PietInfo

#   LINK_COMPONENTS
#     CodeGen
#     Core
#     Support
#     MC

#   ADD_TO_COMPONENT
#     Piet
# )

set(sources
  PietTargetMachine.cpp
  )

add_llvm_target(PietCodeGen ${sources}
  LINK_COMPONENTS
  # Analysis
  # AsmPrinter
  # CFGuard
  CodeGen
  # CodeGenTypes
  Core
  # GlobalISel
  # IRPrinter
  # Instrumentation
  MC
  # ObjCARC
  # ProfileData
  # Scalar
  # SelectionDAG
  Support
  # Target
  # TargetParser
  # TransformUtils
  PietDesc
  PietInfo

  ADD_TO_COMPONENT
  Piet
  )

add_subdirectory(TargetInfo)
add_subdirectory(MCTargetDesc)

# tablegen(LLVM PietGenInstrInfo.inc  -gen-instr-info)
# tablegen(LLVM PietGenSubtargetInfo.inc -gen-subtarget)
# other tablegen invocations if needed

  # PietInstrInfo.cpp
  # PietRegisterInfo.cpp
  # PietSubtarget.cpp

# LLVMInitializePietTarget
