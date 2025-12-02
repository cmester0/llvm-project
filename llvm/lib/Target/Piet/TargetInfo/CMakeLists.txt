add_llvm_component_library(LLVMPietInfo
  PietTargetInfo.cpp

  LINK_COMPONENTS
  MC
  Support

  ADD_TO_COMPONENT
  Piet
  )
