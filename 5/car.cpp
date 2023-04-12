#include <iostream>
using namespace std;
bool car(char a){
if (static_cast<int> (a)>65 && static_cast<int>(a)< 90){
    return true;
}
if (static_cast<int>(a)>97 && static_cast<int>(a)< 122 ){
    return false;
}
}
int main () {
    char a;
    cin >> a;
    if (car(a) == true)
        cout << "es mayuscula" <<endl;
    else 
        cout << "es minuscula"<< endl;
    return 0;
}