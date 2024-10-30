#include <iostream>
#include <cmath>
using namespace std;

long double factorial(int a){
    
    long double factorial = 1;

    
    for(int i=1; i <= a; i++){
        factorial = i * factorial;
    }
    
    return factorial;
}

int main(){
    
    int a, fac;
    
    cout <<"Ingrese un número entero"<< endl; //Mensaje de alerta
    cin >> a;
    
    fac = factorial(a);

    cout <<"El factorial de "<<a<<" es igual a "<<fac<<endl; //Mensaje de alerta
    
    return 0;
}