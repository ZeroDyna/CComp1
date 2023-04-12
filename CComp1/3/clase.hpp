#include <string>
class Account {
public:
// Account constructor with two parameters
Account(std::string accountName , int initialBalance )
 : name{accountName} { // assign accountName to data member name

 // validate that the initialBalance is greater than 0; if not,
 // data member balance
 if (initialBalance >0 ) {
    balance = initialBalance;
 } 
 }
void deposit(int depositAmount){
    if (depositAmount > 0){
        balance += depositAmount;
    }
}

int getBalance() const {
    return balance;
}
void retire (int retired){
    if (balance - retired < 0)
    std::cout << "la transaccion no es posible"<< std::endl;
    else 
    balance -= retired;
}


 // function that sets the name
 void setName(std::string accountName) {
 name = accountName;
 }

 // function that returns the name
 std::string getName() const {
 return name;
 }
 private:
 std::string name; // account name data member
int balance{0};
 }; // end class Account