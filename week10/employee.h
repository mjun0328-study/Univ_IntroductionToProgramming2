//This is the HEADER FILE employee.h.
//This is the INTERFACE for the class Employee.
//This is primarily intended to be used as a base class to derive
//classes for different kinds of employees.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

namespace SavitchEmployees
{
	class Employee
	{
	public:
		Employee( );
		Employee(string theName, string theSsn);
		string getName( );
		string getSsn( );
		double getNetPay( );
		void setName(string newName); 
		void setSsn(string newSsn);
		void setNetPay(double newNetPay);
		void printCheck( );
	protected: 
		string name; 
		string ssn; 
		double netPay;
	};

}//SavitchEmployees
#endif //EMPLOYEE_H
