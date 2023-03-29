#include <iostream>
using namespace std;

int main() {
    double millasperdia, gasolina, millaspergalon, estacionamiento, peaje, costoperdia;

    cout << "Ingrese el número de millas conducidas por día: ";
    cin >> millasperdia;

    cout << "Ingrese el costo por galón de gasolina: ";
    cin >> gasolina;

    cout << "Ingrese el número de millas por galón de gasolina: ";
    cin >> millaspergalon;

    cout << "Ingrese el costo diario de estacionamiento: ";
    cin >> estacionamiento;

    cout << "Ingrese el costo diario de peaje: ";
    cin >> peaje;

    costoperdia = (millasperdia / millaspergalon) * gasolina + estacionamiento + peaje;

    cout << "El costo diario de conducir a su trabajo es: $" << costoperdia << endl;

    return 0;
}

