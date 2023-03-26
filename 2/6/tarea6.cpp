#include <iostream>

int main() {
    char c;
    std::cout << "Ingresa un caracter: ";
    std::cin >> c;
    std::cout << "En enteros seria " << c << " es " << static_cast<int>(c) << std::endl;
    return 0;
}

