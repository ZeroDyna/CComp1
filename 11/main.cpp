 #include <iostream>
 #include <iomanip>
 #include "plus.hpp"
 #include "comission.hpp"
 using namespace std;
 int main() {
 // instantiate BasePlusCommissionEmployee object 
 BasePlusCommissionEmployee employee{"Bob", "Lewis", "333-33-3333",
 5000, .04, };

 // get commission employee data
 cout << fixed << setprecision(2); // set floating-point formatting
 cout << "Employee information obtained by get functions: \n"
 << "\nFirst name is " << employee.getFirstName() 
 << "\nLast name is " << employee.getLastName()
 << "\nSocial security number is "
 << employee.getSocialSecurityNumber()
 << "\nGross sales is " << employee.getGrossSales()
 << "\nCommission rate is " << employee.getCommissionRate()
 
 
 cout << "\nUpdated employee information from function toString: \n\n"
 << employee.toString();

 // display the employee's earnings
 cout << "\n\nEmployee's earnings: $" << << endl;
 } 