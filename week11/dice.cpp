#include "dice.h"
#include <cstdlib>
#include <time.h>

Dice::Dice()
{
	numSides = 6;
	srand(time(NULL)); // Seeds random number generator
}

Dice::Dice(int numSides)
{
	this->numSides = numSides;
	srand(time(NULL)); // Seeds random number generator
}

int Dice::rollDice() const
{
	return (rand() % numSides) + 1;
}

