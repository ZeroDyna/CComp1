#include <string>
#include <iostream>

class Account {
public:
    // Account constructor with two parameters
    Account(std::string accountName, int initialBalance)
        : name{accountName}{
        // validate that the initialBalance is greater than 0; if not,
        // data member balance keeps its default initial value of 0
        if (initialBalance > 0) {
            balance = initialBalance;
        }
    }

    // function that sets the name
    void setName(std::string accountName) {
        name = accountName;
    }

    // function that returns the name
    std::string getName() const {
        return name;
    }
	void deposit(int depositAmount) {
		if (depositAmount > 0) { // if the depositAmount is valid
			balance = balance + depositAmount; // add it to the balance
		}
	}

    void retirar(int cantidad) {
        if (cantidad > balance) {
            std::cout << "Opcion invalida por favor seleccione una cantidad de acuerdo a su saldo" << std::endl;
        } else {
            balance -= cantidad;
        }
    }

    // function that returns the balance
    int getBalance() const {
        return balance;
    }

private:
    std::string name; // account name data member
    int balance{0}; // account balance data member
}; // end class Account

