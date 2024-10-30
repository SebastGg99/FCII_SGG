#include "iostream"
using namespace std;

//Se declara la clase
class Triangles{

    private: //Atributos
        float Area, Perimetro;
        char Option;

    public: //Métodos
        Triangles(float);
        void Equi(float lado);
        void Iso(float lado1, float lado2);
        void Rect(float cateto1, float cateto2);
        void option();

};

//Se crean las instancias
Triangles::Triangles(float area, float perimetro, char option){
    Area = area;
    Perimetro = perimetro;
    Option = option;

}

// int main(){
//     float lado, lado1, lado2, cateto1, cateto2, h, area, perimetro;
//     char option;

//     cout <<"Escoja el triángulo que quiere analizar";
//     cin >> option;
//     if(option == "Equilatero"){
//         cout <<"Ingrese el valor de los lados del triángulo"<< endl;
//         cin >> lado;
//         perimetro == 3*lado;
//         area == sqrt(3)*lado / 2; //Raíz de tres medios lado
//         cout <<"El área es "<< area << "y el perímetro es "<< perimetro <<endl;
//     }
//     else if(option == "Isósceles"){
//         cout <<"Ingrese el valor del primer lado"<< endl;
//         cin >> lado1;
//         cout <<"Ingrese el valor del segundo lado"<< endl;
//         cin >> lado2;
//         h == sqrt(pow(lado2, 2) + pow(lado1, 2)/4);
//         perimetro == 2*lado1 + lado2;
//         area == lado2*h / 2;
//         cout <<"El área es "<< area << "y el perímetro es "<< perimetro <<endl;
        
//     }
//     else if(option == "Rectángulo"){
//         cout <<"Ingrese el valor del primer cateto"<< endl;
//         cin >> cateto1;
//         cout <<"Ingrese el valor del segundo cateto"<< endl;
//         cin >> cateto2;
//         h == sqrt(pow(cateto1, 2) + pow(cateto2, 2));
//         perimetro == cateto1 + cateto2 + h;
//         area == (cateto1 * cateto2) / 2;
//         cout <<"El área es "<< area << "y el perímetro es "<< perimetro <<endl;
//     }


//     return 0;
// }