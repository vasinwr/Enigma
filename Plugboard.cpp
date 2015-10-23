//
// Created by Vasin W on 18/10/2015.
//
#include <iostream>
#include <fstream>
#include "Plugboard.h"

using namespace std;

Plugboard::Plugboard(char* filename) {
  for(int i =0; i< 26; i++){
    board[i] = i;
  }
  //read from input and swap
  ifstream myfile (filename);
  if (myfile.is_open()) {
    /*while (myfile.good()) {
      //while (!myfile.eof()){
      int a;
      myfile >> a;
      int b;
      myfile >> b;
      if (myfile.eof()) break;
      swap(a, b);
    }*/
    int a;
    int b;
    while(myfile >> a){
      myfile >> b;
      swap(a,b);
    }
    myfile.close();
  }
  else cout << "Unable to open file" <<endl;

//  for(int i = 0; i < 26; i ++){
//    cout << board[i] << endl;
//  }

}

int Plugboard::map(int input) {
  return board[input];
}

int Plugboard::map_back(int input){
  for(int i =0; i<26; i++){
    if(board[i] == input){
      return i;
    }
  }
  return -1;
}

void Plugboard::swap(int a, int b){
  //cout << "swap!" << a << " " << b << endl;
  int temp = board[a];
  board[a] = board[b];
  board[b] = temp;
}
