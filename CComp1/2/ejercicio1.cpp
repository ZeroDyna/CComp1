#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    int min;
    int max;
    cout <<" escriba 3 numeros"<<endl;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << " los numeros son "<< a << b << c << endl;
    int sum = a + b + c;
    cout << "la suma es" << sum << endl;
    int average = (a + b + c)/3;
    cout << "el promedio es "<< average << endl;
    int multi = a*b*c;
    cout << "multiplicados dan "<< multi << endl;
    min = a;
    max = a;
    if (b < a){
        min = b;
    }
    else {}

    if (c < b){
        min = c;
    }
    else {}
    cout << " el menor es " << min <<endl;
        if (b > a){
        max = b;
    }
    else {}

    if (c > b){
        max = c;
    }
    else {}
    cout << " el mayor es " << max <<endl;
    
    return 0;
}