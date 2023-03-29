#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    // create two Account objects
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    // display initial balance of each object
    cout << "account1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: "; // prompt
    int depositAmount;
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account1 balance\n\n";
    account1.deposit(depositAmount); // add to account1's balance

    // display balances
    cout << "account1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance();

    cout << "\n\nEnter deposit amount for account2: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account2 balance\n\n";
    account2.deposit(depositAmount); // add to account2's balance

    // display balances
    cout << "account1: " << account1.getName() << " balance is $"
         << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
         << account2.getBalance() << endl;
	
	cout << "\n\nIngrese la cantidad que desea retirar en account1: ";
    int cantidad;	
	cin >> cantidad;
	account1.retirar(cantidad);

	cout << "\n\nIngrese la cantidad que desea retirar en account2: ";
	cin >> cantidad;
	account2.retirar(cantidad);

	cout << "\n\naccount1: " << account1.getName() << " balance is $"
     << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $"
     << account2.getBalance() << endl;
    return 0;
}

