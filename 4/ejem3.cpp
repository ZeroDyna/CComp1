#include <iostream>
#include <string>
using namespace std;
int main(){
    string cad;
    cin >> cad;
    int sum = 0;
    for (int i = 0;i < cad.length(); i++ ){
        sum += cad.at(i);
}
cout << sum << endl;
        

}