#include "iostream"
using namespace std;

//Se declara la clase
class Operations{
    private: //Atributos
        float A1, B1, A2, B2;

    public: //Métodos
        Operations();
        void suma(float, float);
        void suma();
        void producto();

};


// //Se crean las instancias
// Operations::Operations(float a1, float b1, float a2, float b2){
//     A1 = a1;
//     B1 = b1;
//     A2 = a2;
//     B2 = b2;

// }