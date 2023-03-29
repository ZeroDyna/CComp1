#include <iostream>
#include "date.h"
using namespace std;
#include <iostream>
int main() {
    Fecha fecha1(12, 31, 2022);
    cout << "La fecha es: ";
    fecha1.mostrarFecha();

    fecha1.setFecha(2, 29, 2023);
    cout << "La fecha es: ";
    fecha1.mostrarFecha();

    return 0;
}

