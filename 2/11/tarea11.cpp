#include <iostream>
using namespace std;

int main() {
    int edad;
    double mhr1, mhr2, mhr3;
    
    cout << "Ingrese su edad: ";
    cin >> edad;
    
    mhr1 = 220 - edad;
    mhr2 = 208 - 0.7 * edad;
    mhr3 = 211 - 0.64 * edad;
    
    cout << "Segun la ecuacion MHR = 220 - edad, su MHR sugerida es: " << mhr1 << endl;
    cout << "Segun la ecuacion MHR = 208 - 0.7(edad), su MHR sugerida es: " << mhr2 << endl;
    cout << "Segun la ecuacion MHR = 211 - 0.64(edad), su MHR sugerida es: " << mhr3 << endl;
    
    double menor_mhr = min(mhr1, min(mhr2, mhr3));
    double mayor_mhr = max(mhr1, max(mhr2, mhr3));
    
    cout << "La menor MHR sugerida es: " << menor_mhr << endl;
    cout << "La mayor MHR sugerida es: " << mayor_mhr << endl;

    return 0;
}

