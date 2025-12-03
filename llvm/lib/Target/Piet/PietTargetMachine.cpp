#include "PietTargetMachine.h"

#include "TargetInfo/PietTargetInfo.h"

using namespace llvm;

PietTargetMachine::PietTargetMachine(
  const Target &T, const Triple &TT,
  StringRef CPU, StringRef FS,
  const TargetOptions &Options,
  std::optional<Reloc::Model> RM,
  std::optional<CodeModel::Model> CM,
  CodeGenOptLevel OL, bool JIT)
    : CodeGenTargetMachineImpl(
	T,
	TT.computeDataLayout(),
	TT,
	CPU,
	FS,
	Options,
	RM.value_or(Reloc::Model::Static),
	CM.value_or(CodeModel::Small),
	OL)
{ }

PietTargetMachine::~PietTargetMachine() = default;

extern "C" LLVM_C_ABI void LLVMInitializePietTarget() {
    RegisterTargetMachine<PietTargetMachine> X(getThePietTarget());
}
