#include <iostream>
using namespace std;
int cad(string a, char b){
    int l;
    int cont;
    l = a.length();
    cont = 0;
    for (int i = 0; i<l ; i++){
        if (a.at(i) == b){
            cont +=1;
        }
    }
    return cont;
}
int main (){
    string a;
    char b;
    cin>> a;
    cin >> b;
    cout<< "el numero de veces que se repite la letra" << cad(a,b) <<endl;
    return 0;
}