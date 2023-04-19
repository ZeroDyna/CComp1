#include <iostream>
using namespace std;
int main() {
    int num = 2520;
    for (int i = 11; i <= 20; i++) {
        if (num % i != 0) {
            num += 2520;
            i = 10;
        }
    }
    cout << num << std::endl;
    return 0;
}
