#include "administrator.h"
#include <iostream>
#include <string>

using namespace SavitchEmployees;

int main()
{
	Administrator A1("Tom", "12345", "Director", "Finance", "Jane", 1000.);
	A1.print();
	A1.printCheck();

	Administrator A2;
	A2.print();
	A2.printCheck();

	return 0;
}