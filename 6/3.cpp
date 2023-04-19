#include <iostream>

using namespace std;

int main() {
    long long num = 600851475143;
    long long largo= 0;
	bool Primo = 0;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            Primo = true;
            for (long long j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    Primo = false;
                    break;
                }
            }
            if (Primo) {
                largo = i;
                while (num % i == 0) {
                    num /= i;
                }
            }
        }
    }

    if (num > 1) {
        largo = num;
    }

    cout << "El factor primo más grande de 600851475143 es: " << largo << endl;

    return 0;
}

