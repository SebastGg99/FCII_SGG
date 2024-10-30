#include "iostream"
using namespace std;

void Ejemplo();
const float gravedad = 9.8;

 //Se define una variable global, constante que nunca cambia en memoria

int main(){
    
    cout<<"Primer llamado de la función ejemplo"<<endl;
    Ejemplo();
    cout<<"Segundo llamado de la función ejemplo"<<endl;
    Ejemplo();
    cout<<"Tercer llamado de la función ejemplo"<<endl;
    Ejemplo();

    return 0;
    }

void Ejemplo(){
    
    static int var1 = 10; //Se almacenan los cambios cada vez
    int var2 = 10; //La variable se reincia a su valor original cada vez
    float aceleracion = gravedad;

    ++var1;
    ++var2;

    cout<<"El valor static es: "<<var1<<endl;
    cout<<"El valor int es: "<<var2<<endl;
    cout<<"El valor constant es: "<<aceleracion<<endl;
}