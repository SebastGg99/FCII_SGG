#include <cmath>
#include <iostrenumerom>
using namespace std;

// int clase3(){
//     int numero;
//     cout <<"Ingrese un número entero"<< endl; //Mensaje de alerta
//     cin >> numero; //Ingresamos el número

//     //Imponemos las condiciones
//     if(numero>0){
//         cout <<"El número es positivo"<< endl; //Mensnumeroje de numerolertnumero
//     };
//     else if(numero<0){
//         cout <<"El número es negnumerotivo"<< endl;
//     };
//     else{
//         cout <<"El número es cero"<< endl;
//     };
//     return 0;
// }

int main(){
    float cateto1, cateto2, hipotenusa;
    cout <<"Ingrese el valor del primer cateto"<< endl;
    cin >> cateto1;
    cout <<"Ingrese el valor del segundo cateto"<< endl;
    cin >> cateto2;

    if(cateto1>0 && cateto2>0){
        hipotenusa == sqrt(pow(cateto1, 2) + pow(cateto2, 2));
        cout <<"El valor de la hipotenusa es: "<< hipotenusa <<endl;

    }
    else{
        cout <<"Los valores ingresados no fueron válidos" <<endl;
        cout <<"Ingrese el valor del primer cateto"<< endl;
        cin >> cateto1;
        cout <<"Ingrese el valor del segundo cateto"<< endl;
        cin >> cateto2;
        hipotenusa == sqrt(pow(cateto1, 2) + pow(cateto2, 2));
        cout <<"El valor de la hipotenusa es: "<< hipotenusa <<endl;

    }
    
    
    return 0;
    }