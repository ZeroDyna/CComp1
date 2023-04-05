#include <iostream>
using namespace std;
int main (){
    int n; 
    cin >> n;
    int n1, n2, fib;
    n1 = n2 = 1;
    if (n == 0 || n ==1 ){
        cout << " El fibonacci de "<< n << "es " << 1 << endl;
    }
    else {
        for (int i = 0; i < n; i++){
            fib = n1 + n2;
            n1 = n2;
            n2 = fib;
        }
        cout << " el  fibonacci de "<< n << "es "<< fib << endl;
    }

    return 0;
}