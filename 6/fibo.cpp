//en este ejemplo se implementaron varias funciones para demostrar la recursividad
//En los primeros dos ejemplos se compara el numero de fibonacci con su forma recursiva
#include <iostream> 
using namespace std;
int fibo(int n){
    int a , b ,c ;
     a = b = c = 1;
    if (n<=1)
        return 1;
    for (int i = 1; i < n ; i++){
        c = a + b;
        a = b;
        b = c;

    }
    return c;
}
long long fibo_re(int n){
    if (n==1 || n == 0)
        return 1;
    else {
        return fibo_re(n-2) + fibo_re(--n);
    } 

}
long long  fact(int n){
    if ( n==0 || n == 1)
        return 1;
    
    else{ 
        return n * fact(--n);
    }
}
int main (){
    int n; 
    cin >> n;
    cout<< "el fibo de n es : "<< fact(n) << endl;
    return 0;
}
