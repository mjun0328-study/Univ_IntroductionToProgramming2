#include <iostream>
#include "loadedDice.h"

using namespace std;

int rollTwoDice(const Dice& die1, const Dice& die2) {
  return die1.rollDice() + die2.rollDice();
}

int main() {
  LoadedDice d1(10), d2(10);
  for(int i=0; i<10; i++) {
    cout << rollTwoDice(d1, d2) << endl;
  }
}