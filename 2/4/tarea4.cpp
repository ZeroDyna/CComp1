#include <iostream> 
using namespace std;
#include <iostream>

int main() {
    int num1, num2, suma;

    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el segundo número: ";
    std::cin >> num2;

    suma = num1 + num2;

    if (num1 % 2 == 0) {
        std::cout << num1 << " es un número par." << std::endl;
    } else {
        std::cout << num1 << " es un número impar." << std::endl;
    }

    if (num2 % 2 == 0) {
        std::cout << num2 << " es un número par." << std::endl;
    } else {
        std::cout << num2 << " es un número impar." << std::endl;
    }

    if (suma % 2 == 0) {
        std::cout << "La suma de los números ingresados es par." << std::endl;
    } else {
        std::cout << "La suma de los números ingresados es impar." << std::endl;
    }

    return 0;
}

