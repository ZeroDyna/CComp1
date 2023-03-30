#include <iostream>
#include <string>
class factura{
public:
    factura(std::string six , std::string descript , int cuant , int price , double tax, double desc ){
    seis = six;
    descripcion = descript;
    cantidad = cuant;
    precio = price;
    imp = tax;
    descuento = desc;
    tax = 0.20;
    desc = 0;
    }

void set_six (std::string six ){
    seis = six;
}
std::string get_six(){
    return seis;
}

void set_descript(std::string descript){
    descripcion = descript;
}
std::string get_descript(){
    return descripcion;
}

void set_cuant (int cuant){
    cantidad = cuant;
}
int get_cuant(){
    return cantidad;
}

void set_price(int price){
    precio = price;
}
int get_price(){
    return precio;
}

void set_tax (double tax){
    imp = tax; 
}
double get_tax(){
    return imp;
}

void set_desc(double desc){
    descuento = desc;
}
double get_desc(){
    return descuento;
}
void get_InvoiceAmount (double total){
    total = cantidad*precio-imp+descuento;
}

private:
std::string seis;
std::string descripcion;
int cantidad;
int precio;
double imp ;
double descuento;



};