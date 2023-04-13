#include <iostream>
using namespace std;
void inremento( int &q){    //aqui se usar el paso por referencia , el paso por valor ya lo hemos estado utilizando desde hace mucho
    q +=5; 
    cout << "dentro de la funcion q es igual a  =" << q << endl;

}

int main() {
    int q ;
    q = 3;
    inremento(q);
    cout <<"q en la fucion main = "<< q << endl;
    return 0;
}