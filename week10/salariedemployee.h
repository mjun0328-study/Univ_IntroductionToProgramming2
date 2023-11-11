//*********************************************
//This is the HEADER FILE salariedemployee.h. 
//This is the INTERFACE for the class SalariedEmployee.
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "employee.h"

using std::string;

namespace SavitchEmployees
{

  class SalariedEmployee : public Employee
  {
  public:
    SalariedEmployee( );
    SalariedEmployee (string theName, string theSsn,
                  double theWeeklySalary);
    double getSalary();
    void setSalary(double newSalary); 
    void printCheck( );
  private:
    double salary; //weekly
  };

}//SavitchEmployees

#endif //SALARIEDEMPLOYEE_H
