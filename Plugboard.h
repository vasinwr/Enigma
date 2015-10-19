//
// Created by Vasin W on 18/10/2015.
//

#ifndef CENIGMA_VW214_PLUGBOARD_H
#define CENIGMA_VW214_PLUGBOARD_H

class Plugboard{
private:
  void swap(int,int);

public:
  int board[26];
  Plugboard(char*);
  int map(int);
  int map_back(int);
};

#endif //CENIGMA_VW214_PLUGBOARD_H
