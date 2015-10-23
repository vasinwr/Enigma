// skeleton C++ file, you will need to edit this and other files to implement your enigma machine
#include <stdexcept>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <assert.h>
#include "Machine.h"

using namespace std;


int main(int argc, char **argv)
{
  /*testing for machine creation and mapping
  vector<Rotor> rotors;
  char name[] = "rotors/I.rot";
  Rotor r(name);
  rotors.push_back(r);
  char name2[] = "rotors/II.rot";
  Rotor r2(name2);
  rotors.push_back(r2);

  char name3[] = "plugboards/IV.pb";
  Plugboard pg(name3);

  for(int i = 0 ; i < 26 ; i++){
    cout << pg.board[i] << endl;
  }

  vector<Rotor>& vref = rotors;
  Plugboard& pref = pg;

  Machine enig(vref,pref);


  cout << enig.map(0) << endl;
  */

  /* simple testing to understand argc and argv
  int number_rotors = argc-2;
  cout << argc << endl;
  for(int i = 0; i < argc; i++){
    cout << i << ":" << argv[i] << endl;
  }
  */

  vector<Rotor> rotors;

  int number_rotors = argc-2;
  int pg_arg = argc-1;
  for(int i = 1; i <= number_rotors; i++){
    Rotor r(argv[i]);
    rotors.push_back(r);
  }
  //cout << argv[pg_arg] << endl;
  Plugboard pg(argv[pg_arg]);


  /* printing out rotors content
  for(Rotor& each :rotors) {
    cout << "//////" << endl;
    for (int i = 0; i < 26; i++) {
      cout << each.wire[i] << endl;
    }
  }
  */

  vector<Rotor>& vref = rotors;
  Plugboard& pref = pg;

  Machine enig(vref,pref);

  /* testing without parsing
  while(true) {
    int input;
    cin >> input;
    cout << enig.map(input) << endl;
    enig.rotate();
  }*/


  char c;
  while (cin >> ws >> c) {
    int ascii = (int)c;
    int input = ascii - 65;
    assert(0<=input && input<=25 && "INPUT BETWEEN CAPITAL A-Z ONLY ");
    //cout << input << endl;
    int output = enig.map(input);
    output = output + 65;
    char out = (char) output;
    cout << out;
  };

  return 0;
}

