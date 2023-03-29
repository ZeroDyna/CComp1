#include <iostream>
#include "vehiculo.h"

int main() {
    VehiculoMotor miAuto("Toyota", "Gasolina", 2015, "Rojo", 2000);
    miAuto.mostrarDetallesVehiculo();

    miAuto.setColor("Negro");
    cout << "Después de pintar el auto:" << endl;
    miAuto.mostrarDetallesVehiculo();

    return 0;
}

