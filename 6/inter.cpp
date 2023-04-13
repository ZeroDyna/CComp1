#include <iostream>
using namespace std;
void inter(int &a , int &b){ //aqui se usa paso por referencia 
    int tmp = a;
    a = b;
    b = tmp;

}
int main (){
    int q = 10;
    int r = 20;
    inter(q,r);
    cout << " el valor de q = "<< q; //si la funcion esta correcta aqui q = 20
    cout << "el valor de r = "<< r; //y aqui r = 10
    
    return 0;
}