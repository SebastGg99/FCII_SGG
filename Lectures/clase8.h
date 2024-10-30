#include "iostream"
using namespace std;


//Se declara la clase
class Factorial{

    private: //Atributos
        int Numero;

    public: //Métodos
        Factorial(int);
        void factorial();

};

//Se crean las instancias
Factorial::Factorial(int numero){
    Numero = numero;
}

//Se construye el cuerpo de las funciones
void Factorial::factorial(){
    long double factorial = 1;
    
    for(int i=1; i <= Numero; i++){
        factorial = i * factorial;
        }
        cout<<factorial<<endl;
};