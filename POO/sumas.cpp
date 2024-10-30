#include "iostream"
#include "sumas.h"
using namespace std;

void Operations::suma(float x, float y){
    float resultado = x + y;
    cout<<"La suma de los números Reales es: "<<resultado<<endl;
}

// void Operations::suma(float A1, float B1, float A2, float B2){
//     float resultado1 = A1 + A2;
//     float resultado2 = B1 + B2;

//     cout<<"La suma de los números Complejos es: "<<resultado1<<"+ i"<<resultado2<<endl;
// }

void Operations::producto(float A1, float B1){
    float resultado = A1 * B1;
    cout<<"El producto de los números Reales es: "<<resultado<<endl;
}

// void Operations::producto(float A1, float B1, float A2, float B2){
//     float resultado1 = A1*A2 - B1*B2;
//     float resultado2 = A1*B2 + B1*A2;
//     cout<<"El producto de los números Complejos es: "<<resultado1<<"+ i"<<resultado2<<endl;
// }