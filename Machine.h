//
// Created by Vasin W on 18/10/2015.
//

#ifndef CENIGMA_VW214_MACHINE_H
#define CENIGMA_VW214_MACHINE_H

#include <vector>
#include "Rotor.h"
#include "Plugboard.h"
#include "Reflector.h"

class Machine {
private:
  std::vector<int> offsets;
  std::vector<Rotor>& rotors;
  Plugboard& pg;
  Reflector re;

  void rotate_aux(int);
  int map_forward(int);
  int map_backward(int);
  void rotate();

public:
  Machine(std::vector<Rotor>&, Plugboard&);
  int map(int);
};

#endif //CENIGMA_VW214_MACHINE_H
