add_llvm_component_library(LLVMPietDesc
  # PietATTInstPrinter.cpp
  # PietIntelInstPrinter.cpp
  # PietInstComments.cpp
  # PietInstPrinterCommon.cpp
  # PietEncodingOptimization.cpp
  # PietShuffleDecode.cpp
  # PietAsmBackend.cpp
  PietMCTargetDesc.cpp
  # PietMCAsmInfo.cpp
  # PietMCCodeEmitter.cpp
  # PietMachObjectWriter.cpp
  # PietMnemonicTables.cpp
  # PietELFObjectWriter.cpp
  # PietWinCOFFObjectWriter.cpp
  # PietWinCOFFStreamer.cpp
  # PietWinCOFFTargetStreamer.cpp

  LINK_COMPONENTS
  BinaryFormat
  CodeGenTypes
  MC
  MCDisassembler
  Support
  TargetParser
  PietInfo

  ADD_TO_COMPONENT
  Piet
  )
