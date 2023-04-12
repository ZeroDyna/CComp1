#include <iostream>
using namespace std;
int cad(string a){
    int l;
    int cont;
    l = a.length();
    cont = 0;
    for (int i = 0; i<l ; i++){
        if (static_cast<int>(a.at(i)) >47 && static_cast<int>(a.at(i)) < 58){
            cont +=1;
        }
    }
    return cont;
} 

    int main (){
        string a;
        cin >> a;
        cout <<"el total de digito es "<< cad(a) << endl;
        return 0;
 }