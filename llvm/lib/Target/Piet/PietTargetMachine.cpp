// extern "C" void LLVMInitializePietTarget() {
//     RegisterTargetMachine<PietTargetMachine> X(getThePietTarget());
// }

extern "C" void LLVMInitializePietTargetInfo();
extern "C" void LLVMInitializePietTargetMC();
