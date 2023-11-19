#include "dice.h"

class LoadedDice : public Dice {
  public:
    LoadedDice();
    LoadedDice(int numSides);
    int rollDice() const override;
}