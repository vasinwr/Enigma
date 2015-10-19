//
// Created by Vasin W on 18/10/2015.
//

#include <iostream>
#include <fstream>
#include "Rotor.h"

using namespace std;

Rotor::Rotor(char* filename){
  ifstream myfile (filename);
  if (myfile.is_open()) {
    for (int i = 0; i < 26; i++) {
      myfile >> wire[i];
    }
    myfile.close();
  }
  else cout << "Unable to open file";

}

int Rotor::map(int input,int offset){
  return wire[(input + offset)%26];
}

int Rotor::map_back(int input, int offset){
  int count = 0;
  while(count < 26){
    if(wire[(count + offset)%26] == input){
      return count;
    }
    count++;
  }
  return -1;
}
