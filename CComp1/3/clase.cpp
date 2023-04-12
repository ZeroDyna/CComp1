#include <iostream>
#include "clase.hpp"

using namespace std;

int main()
{
    int retired;
    Account account1{"Jane Green" , 50 };
    Account account2{"Jhon Blue" , -7 };



 // display initial balance of each object
 cout << "account1: " << account1.getName() << " balance is $"
 << account1.getBalance() ;
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance() ;

 cout << "\n\nEnter deposit amount for account1: "; // prompt
 int depositAmount;
 cin >> depositAmount; // obtain user input
 cout << "adding " << depositAmount << " to account1 balance";
account1.deposit(depositAmount);

 // display balances
 cout << "\n\naccount1: " << account1.getName() << " balance is $"
 << account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance();

cout<< "\n seleccione la cantidad que desea retirar" ;
cin >> retired;
cout << " el nuevo balance seria de " << account2 << endl;



 cout << "\n\nEnter deposit amount for account2: "; // prompt
 cin >> depositAmount; // obtain user input
 cout << "adding " << depositAmount << " to account2 balance";
account2.deposit(depositAmount);

cout<< "\n seleccione la cantidad que desea retirar" ;
cin >> retired;
cout << " el nuevo balance seria de " << account2<< endl;

 // display balances
 cout << "\n\naccount1: " << account1.getName() << " balance is $"
 << account1.getBalance();
 cout << "\naccount2: " << account2.getName() << " balance is $"
 << account2.getBalance() << endl;
 }