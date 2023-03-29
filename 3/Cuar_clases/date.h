#include <iostream>

class Fecha {
public:
    Fecha(int mes = 1, int dia = 1, int anio = 1900) {
        setFecha(mes, dia, anio);
    }
    void setFecha(int mes, int dia, int anio) {
        if (mes < 1 || mes > 12) {
            mes = 1;
        }
        mes_ = mes;
        dia_ = dia;
        anio_ = anio;
    }
    int getMes() const {
        return mes_;
    }
    int getDia() const {
        return dia_;
    }
    int getAnio() const {
        return anio_;
    }
    void mostrarFecha() const {
        std::cout << mes_ << "/" << dia_ << "/" << anio_ << std::endl;
    }
private:
    int mes_;
    int dia_;
    int anio_;
};
