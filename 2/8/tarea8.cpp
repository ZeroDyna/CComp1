#include <iostream>
using namespace std;
int main() {

	cout << "Longitud \tArea de la superficie \tVolumen" << endl;

    for (int longitud = 0; longitud <= 4; longitud++) {
        int area_superficial = 6 * longitud * longitud;
        int volumen = longitud * longitud * longitud;

        cout << longitud << "\t\t" << area_superficial << "\t\t\t" << volumen << endl;
    }

    return 0;
}

