#include <iostream>

using namespace std;

bool palindromo(int num) {
    int original = num;
    int invertido = 0;
    for (int i = num; i > 0; i /= 10) {
        invertido = invertido * 10 + i % 10;
    }
    return original == invertido;
}


int main() {
    int mayorPalindromo = 0;

    for (int i = 100; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            int producto = i * j;
            if (palindromo(producto) && producto > mayorPalindromo) {
                mayorPalindromo = producto;
            }
        }
    }

    cout << "El mayor palíndromo obtenido del producto de dos números de 3 dígitos es: " << mayorPalindromo << endl;

    return 0;
}

