#include <iostream> 
using namespace std;
int main() {
    char n1 , n2;
    char n3;
    cout << "ingrese el primer caracter : ";
    cin >> n1;
    cout << "ingrese el segundo caracter: "; 
    cin >> n2; 
    int val1 = static_cast<int>(n1);
    int val2 = static_cast<int>(n2);
    
    if ((val1 <= 48 || val1>=57) && (val2 <= 48 || val2>=57) ){
        cout << "Uno  de los caracteres ingresados es un numero!!!!"<< endl;
    }
    n3 = (static_cast<int>(n1) + static_cast<int>(n2));
    cout << static_cast<char>(n3);


    return 0;
}