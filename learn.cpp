#include <iostream>
#include <string> 
#include <cmath>
using namespace std;

class Persona{

    private:
        int edad;
        string nombre;
    public:
        Persona(int, string);
        void leer();
        void correr();
};


// int main() {
    
//     return 0;
// };

Persona::Persona(int _edad, string _nombre){
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer(){
    cout<<"Soy"<<nombre<<endl;
}

void Persona::correr(){
    cout<<"Soy"<<nombre<<" y estoy corriendo una maratón"<<endl;
}