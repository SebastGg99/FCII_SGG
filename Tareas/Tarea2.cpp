//Bucle While en C++

#include <iostream>
#include <cmath>
#define M_Pi 3.1415926535
using namespace std;


long double factorial(int a){
    
    long double factorial = 1;

    
    for(int i=1; i <= a; i++){
        factorial = i * factorial;
    }
    
    return factorial;
}

int main(){
    long double fac, y;
    float x, suma;
    int i, orden;

    cout<<"Elija el orden a calcular: "<<endl;
    cin>>orden;

    cout<<"Elija el ángulo a calcular: "<<endl;
    cin>>x;

    x = M_Pi * x / 180;
    
    while(i<orden){
        
        y = (pow(-1,i) * pow(x,2*i+1)) / factorial(2*i+1);
        suma = suma + y;
        i++;
    }
    
    cout<<suma<<endl;
    
    return 0;
}