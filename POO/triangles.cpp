#include "iostream"
#include "cmath"
#include "triangles.h"
using namespace std;

void Triangles::option(){
    cout <<"Escoja el triángulo que quiere analizar";
    cin >> Option;
};

void Triangles::Equi(float lado){
    cout <<"Ingrese el valor de los lados del triángulo"<< endl;
    cin >> lado;
    Perimetro == 3*lado;
    Area == sqrt(3)*lado / 2; //Raíz de tres medios lado
    cout <<"El área es "<< Area << "y el perímetro es "<< Perimetro <<endl;
};

void Triangles::Iso(float lado1, float lado2){
    cout <<"Ingrese el valor del primer lado"<< endl;
    cin >> lado1;
    cout <<"Ingrese el valor del segundo lado"<< endl;
    cin >> lado2;
    float h = sqrt(pow(lado2, 2) + pow(lado1, 2)/4);
    Perimetro == 2*lado1 + lado2;
    Area == lado2*h / 2;
    cout <<"El área es "<< Area << "y el perímetro es "<< Perimetro <<endl;
};

void Triangles::Rect(float cateto1, float cateto2){
    cout <<"Ingrese el valor del primer cateto"<< endl;
    cin >> cateto1;
    cout <<"Ingrese el valor del segundo cateto"<< endl;
    cin >> cateto2;
    float h = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    Perimetro == cateto1 + cateto2 + h;
    Area == (cateto1 * cateto2) / 2;
    cout <<"El área es "<< Area << "y el perímetro es "<< Perimetro <<endl;
};
