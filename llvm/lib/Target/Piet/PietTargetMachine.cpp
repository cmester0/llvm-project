extern "C" void LLVMInitializePietTarget() {
    RegisterTargetMachine<PietTargetMachine> X(getThePietTarget());
}
