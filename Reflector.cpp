//
// Created by Vasin W on 18/10/2015.
//
#include <iostream>
#include "Reflector.h"

int Reflector::map(int input){

  int out = (input + 13)%26;
  //std::cout << "reflector : input" << input << " output" << out << std::endl;
  return out;
}