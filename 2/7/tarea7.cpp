#include <iostream>
using namespace std;
int main (){
	int num , unidad , decena, centenas, millares;
	cout << "ingrese un numero con cuatro digitos" <<endl;
	cin >> num;
	millares = num / 1000;
	num = num%1000;
	centenas = num / 100;
	num %= 100;
	decena = num / 10;
	unidad = num % 10;
	cout << " el numero separado por 2 espacios seria : " << endl;
	cout << unidad << "  "<< decena << "  " << centenas << "  " << millares << "  " << endl;
	return 0;
}
