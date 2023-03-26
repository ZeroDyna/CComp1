#include <iostream> 
using namespace std;
int main (){
	int num1, num2, num3 , num4 , num5;
	cout<<"ingrese 5 numeros"<<endl;
	cin >> num1 >> num2 >> num3>> num4 >> num5;
//como no puedo usar otras tecnicas solo uso los operadores para compara y determinar una variable max y min
	int max = num1;
	int min= num1;

	if(num2>max){
		max = num2;
	}
	if(num3>max){
		max=num3;
	}
	if(num4>max){
		max=num4;
	}
	if(num5>max){
		max=num5;
	}
	//esto me dareia el numero mas grande
	cout << "el numero mas grande es " << max<< endl;
	// hago lo mismo pero al contrario
	
	if(num2<min){
		min=num2;
	}
	if(num3<min){
		min=num3;
	}
	if(num4<min){
		min=num4;
	}
	if(num5<min){
		min=num5;
	}
	//esto me dareia el numero mas grande
	cout << "el numero mas pequeño es " << min << endl;



		
	return 0;
}
