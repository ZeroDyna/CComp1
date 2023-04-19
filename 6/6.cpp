#include <iostream>
using namespace std;
//me pide difference between the sum of the squares of the first one hundred natural 
int main() {
    int cuadrados = 0;
    int num = 0;
    for (int i = 1; i <= 100; i++) {
        cuadrados += i * i;
        num += i;
    }
    int sumcuad = num * num;
    int diferencia = sumcuad - cuadrados;
    cout << "La respuesta es " << diferencia << endl;
    return 0;
}

