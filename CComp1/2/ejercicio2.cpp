#include <iostream>
using namespace std;
int main(){
    int rad;
    const double pi = 3.14159;
    cout << "ingrese el radio del circulo" << endl;
    cin >> rad;
    cout << "el radio del circulo es " << rad << endl;
    int diam = rad*2;
    cout << "su diametro es "<< diam << endl;
    cout << pi << endl;
    int circun= pi*diam;
    int area = pi*(rad*rad);
    cout << "la circunferencia es " << circun  << "el area es "<< area << endl;
    return 0;
}