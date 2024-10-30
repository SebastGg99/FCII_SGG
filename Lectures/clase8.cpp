#include "iostream"
#include "clase8.h"
using namespace std;


int main(){
    int a;
    cout<<"Ingrese un número entero: "<<endl;
    cin>>a;
    
    Factorial fac = Factorial(a); //Se instancia la clase
    fac.factorial();
    
    return 0;
}