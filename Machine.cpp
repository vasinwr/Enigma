//
// Created by Vasin W on 18/10/2015.
//
#include <vector>
#include "Machine.h"

#include <iostream>

Machine::Machine(std::vector<Rotor>& rotors_x, Plugboard& pg_x):
        rotors(rotors_x), pg(pg_x){
  for(int i = 0; i < rotors_x.size(); i++){
    offsets.push_back(0);
  }
}


int Machine::map(int input){
  int out = input;
  out = pg.map(out);
  out = map_forward(out);
  out = re.map(out);
  out = map_backward(out);
  out = pg.map_back(out);
  rotate();
  return out;
}

int Machine::map_forward(int input){
  int out = input;

  for(int i = 0; i < rotors.size(); i++){
    out = rotors[i].map(out,offsets[i]);
  }
  return out;
}

int Machine::map_backward(int input){
  int out = input;
  for(int i = rotors.size() -1; i >= 0; i--){
    out = rotors[i].map_back(out,offsets[i]);
  }
  return out;
}

void Machine::rotate(){
  rotate_aux(0);
}

void Machine::rotate_aux(int x){
  //if(x < offsets.size()){
  if(x < rotors.size()){
    offsets[x] = offsets[x] + 1;
    if(offsets[x] == 26){
      offsets[x] = 0;
      rotate_aux(x+1);
    }
  }
}