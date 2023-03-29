#include <iostream>
#include <string>
using namespace std;

class VehiculoMotor {
private:
    string marca;
    string tipoCombustible;
    int anoFabricacion;
    string color;
    int capacidadMotor;
public:
    VehiculoMotor(string ma, string tc, int af, string col, int cm) {
        marca = ma;
        tipoCombustible = tc;
        anoFabricacion = af;
        color = col;
        capacidadMotor = cm;
    }

    void setMarca(string ma) {
        marca = ma;
    }

    string getMarca() {
        return marca;
    }

    void setTipoCombustible(string tc) {
        tipoCombustible = tc;
    }

    string getTipoCombustible() {
        return tipoCombustible;
    }

    void setAnoFabricacion(int af) {
        anoFabricacion = af;
    }

    int getAnoFabricacion() {
        return anoFabricacion;
    }

    void setColor(string col) {
        color = col;
    }

    string getColor() {
        return color;
    }

    void setCapacidadMotor(int cm) {
        capacidadMotor = cm;
    }

    int getCapacidadMotor() {
        return capacidadMotor;
    }

    void mostrarDetallesVehiculo() {
        cout << "Marca: " << marca << endl;
        cout << "Tipo de Combustible: " << tipoCombustible << endl;
        cout << "Año de Fabricación: " << anoFabricacion << endl;
        cout << "Color: " << color << endl;
        cout << "Capacidad del Motor: " << capacidadMotor << " cc" << endl;
    }
};

