#include <iostream>
#include "phone.hpp"
using namespace std;

int main() {
PhoneNumber phone; // create object phone

 cout << "Enter phone number in the form (555) 555-5555:" << endl;
cin >> phone;
 //se invoca el operador de >> con el comando de cin
 cout << "\nThe phone number entered was:\n";

 cout << phone << endl;
 //con el comando de  cout<< se invoca al operador
 
return 0;
}
  