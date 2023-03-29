#include <iostream>
using namespace std;

int main() {
    const double BMI_BAJO_PESO = 18.5;
    const double BMI_NORMAL = 24.9;
    const double BMI_SOBREPESO = 29.9;

    double peso, altura, bmi;

    cout << "Ingrese su peso en libras: ";
    cin >> peso;

    cout << "Ingrese su altura en pulgadas: ";
    cin >> altura;

    bmi = peso * 703 / (altura * altura);

    cout << "Su BMI es: " << bmi << endl;

    if (bmi < BMI_BAJO_PESO) {
        cout << "Categoría de BMI: Bajo peso" << endl;
    } else if (bmi <= BMI_NORMAL) {
        cout << "Categoría de BMI: Normal" << endl;
    } else if (bmi <= BMI_SOBREPESO) {
        cout << "Categoría de BMI: Sobrepeso" << endl;
    } else {
        cout << "Categoría de BMI: Obeso" << endl;
    }

    cout << "VALORES DE BMI" << endl;
    cout << "Bajo peso: menos de 18.5" << endl;
    cout << "Normal: entre 18.5 y 24.9" << endl;
    cout << "Sobrepeso: entre 25 y 29.9" << endl;
    cout << "Obeso: 30 o más" << endl;

    return 0;
}

