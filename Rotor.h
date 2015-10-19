//
// Created by Vasin W on 18/10/2015.
//

#ifndef CENIGMA_VW214_ROTORS_H
#define CENIGMA_VW214_ROTORS_H

class Rotor {

private:
public:
  int wire[26];
  Rotor(char* filename);
  int map(int, int);
  int map_back(int, int);
};

#endif //CENIGMA_VW214_ROTORS_H
