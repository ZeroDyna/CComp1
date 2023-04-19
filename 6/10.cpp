#include <iostream>
using namespace std;
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long suma = 0;
    for (int i = 2; i < 2000000; i++) {
        if (esPrimo(i)) {
            suma += i;
        }
    }
    cout << "La suma de los numeros primos hasta 2 millones es: " << suma << endl;
    return 0;
}

