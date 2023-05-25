#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "comission.hpp" // CommissionEmployee class definition
using namespace std;
// constructor
 CommissionEmployee::CommissionEmployee(const string &first,
 const string &last, const string &ssn, double sales, double rate)
 {
 setGrossSales(sales); // validate and store gross sales
 setCommissionRate(rate); // validate and store commission rate
 } 

 // set first name
 void CommissionEmployee::setFirstName(const string& first) {
 firstName = first; // should validate
 } 

 // return first name
 string CommissionEmployee::getFirstName() const {return firstName;}

 // set last name
 void CommissionEmployee::setLastName(const string& last) {
 lastName = last; // should validate
 } 

 // return last name
 string CommissionEmployee::getLastName() const {return lastName;}