//===- PietRegisterInfo.td - Describe the Piet Register File --*- tablegen -*-==//

class PietReg
  : Register<"Piet"> {
  let Namespace = "PIET";
}

def PietR0 : PietReg;
def PietR1 : PietReg;
def PietR2 : PietReg;
def PietR3 : PietReg;

class PietRegClass
  : RegisterClass<"Piet", [i32], 4, (add PietR0, PietR1, PietR2, PietR3)> {
}

def PietRegs : PietRegClass;

//===----------------------------------------------------------------------===//
// Registers
//===----------------------------------------------------------------------===//

