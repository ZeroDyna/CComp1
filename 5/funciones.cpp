#include <iostream>
using namespace std;
int fibo(int n){
    int a , b ,c;
    a = b = c = 1; 
    if (n <= 1){
        return 1;
    }
    for (int i = 2 ; i < n; i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main (){
    int n;
    cin >> n;
    cout <<"el fibo de n es " << fibo(n)<<endl;
    return 0;
}