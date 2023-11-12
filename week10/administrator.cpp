//******************************************************
//This is the IMPLEMENTATION FILE: administrator.cpp 
//This is the IMPLEMENTATION for the class Administrator.
//The interface for the class Administrator is in 
//the header file administrator.h.

#include <iostream>
#include <string>
#include "administrator.h"
using std::string;
using std::cout;
using std::cin;
using std::endl;

namespace SavitchEmployees
{
  Administrator::Administrator( ): SalariedEmployee()
  {
    setAdminData();
  }

  Administrator::Administrator(string name, string ssn, string title, string responsibility, string supervisor, double annualSalary)
                        : SalariedEmployee(name, ssn, 0.), title(title), responsibility(responsibility), supervisor(supervisor), annualSalary(annualSalary)
  {
    //deliberately empty
  }

  void Administrator::setSupervisor( ) 
  {
    cout << "Name of Supervisor: ";
    cin >> supervisor;
  }

  void Administrator::setAdminData()
  {
    string name, ssn;
    cout << "Administrator's new name: ";
    cin >> name;
    cout << "Administrator's new ssn: ";
    cin >> ssn;
    cout << "Administrator's new title: ";
    cin >> title;
    cout << "Administrator's new responsibility: ";
    cin >> responsibility;
    cout << "Administrator's new supervisor: ";
    cin >> supervisor;
    cout << "Administrator's new annual salary: ";
    cin >> annualSalary;
    setName(name);
    setSsn(ssn);
  }

  void Administrator::print( )
  {
    cout << "Administrator's Data" << endl
         << "Name: " << getName() << endl
         << "Annual Salary: " << annualSalary << endl
         << "SSN: " << getSsn() << endl
         << "Title: " << title << endl
         << "responsibility: " << responsibility << endl
         << "supervisor: " << supervisor << endl;
  }

  void Administrator::printCheck( )
  {
    cout << "Administrator's monthly salary: " << (annualSalary / 12) << endl;
  }
}//SavitchAdministrators
