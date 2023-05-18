#include <iostream>
#include "time.hpp" // include definition of class Time
using namespace std;

int main() {
Time t; // create Time object

 
 

 
 
 cout << "\nInvalid hour after modification: " << t.getHour();

 
 
 

 cout << "\n\n*************************************************\n"
 << "POOR PROGRAMMING PRACTICE!!!!!!!!\n"
 << "t.badSetHour(12) as an lvalue, invalid hour: "
 << t.getHour()
 << "\n*************************************************" << endl;
 } 