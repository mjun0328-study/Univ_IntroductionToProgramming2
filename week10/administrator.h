//*********************************************
//This is the HEADER FILE administrator.h. 
//This is the INTERFACE for the class Administrator.
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>
#include "salariedemployee.h"

using std::string;

namespace SavitchEmployees
{

  class Administrator : public SalariedEmployee
  {
  public:
    Administrator( );
    Administrator(string, string, string, string, string, double);

    void setSupervisor();
    void setAdminData();
    void print();
    void printCheck();
  private:
    string title;
    string responsibility;
    string supervisor;
  protected:
    double annualSalary;
  };

}//Administrator

#endif //ADMINISTRATOR_H
