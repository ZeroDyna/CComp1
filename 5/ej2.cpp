#include <iostream>
using namespace std;
bool num(char a){
    int val;
    val = static_cast<int>(a);
    if (val > 47 && val < 58){
        return true;
    }
    else    
        return false;
}
int main (){
    char a;
    cin >> a;
    if (num(a) == true){
        cout << "a es unn numero" << endl;
    }
    else{ 
        cout << "a no es un numero" << endl;
    }
    return 0;
}