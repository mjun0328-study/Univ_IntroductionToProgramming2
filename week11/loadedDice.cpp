#include "loadedDice.h"
#include <iostream>
#include <cstdlib>
#include <time.h>

LoadedDice::LoadedDice() : Dice() {
}

LoadedDice::LoadedDice(int numSides) : Dice(numSides) {
}

int LoadedDice::rollDice() const {
  std::cout << "yay!" << std::endl;

  if(rand() % 2 == 0) {
    return numSides;
  }else {
    return (rand() % numSides) + 1;
  }
}