#include <iostream>
using namespace std;
int main (){

string cad;
cin >> cad;
char c;
cin >> c;
cout << cad.at(0) << endl;
cout << cad.length() << endl;
int cont;
for ( int i = 0; i < cad.length(); i++){
    if (cad.at(i) == c){
    cont++; 
    }
}
cout << "el caracter seleccionado se repite" <<cont<< "veces" << endl;
return 0;
} 