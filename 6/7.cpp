#include <iostream>
using namespace std;

bool primo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 10001;
    int num = 2;
    int count = 1;
    while (count < n) {
        num++;
        if (primo(num)) {
            count++;
        }
    }
    cout << "El " << n << "número primo es " << num << endl;
    return 0;
}

