#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 2;
    int sum = 2;
    
    for (int i = 3; b <= 4000000; i++) {
        int next = a + b;
        a = b;
        b = next;
        
        if (b % 2 == 0) {
            sum += b;
        }
    }
    
    cout << "La suma de los términos pares de la secuencia de Fibonacci hasta 4 millones es: " << sum << endl;
    
    return 0;
}

