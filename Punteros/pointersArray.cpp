#include "iostream"
#include "stdlib.h"
using namespace std;


// int main(){
//     int numeros[10], *dir_numeros;

//     for(int i=0; i<10; i++){
//         cout<<"Digite un numero ["<<i<<"]: "; cin>>numeros[i];
//     }
    
//     dir_numeros = numeros;

//     for(int j=0; j<10; j++){
//         if(*dir_numeros%2 == 0){
//             cout<<"El numero "<<*dir_numeros<<" es par"<<endl;
//             cout<<"Posicion: "<<dir_numeros<<endl;
//         }
//         dir_numeros++;
//     }
//     return 0;
// }

int main(){
    int n;
    cout<<"Ingrese el numero de elementos del arreglo: "<<endl; cin>>n;
    
    int numeros[n], *dir_numeros = numeros;

    for(int i=0; i<n; i++){
        cout<<"Digite un numero ["<<i<<"]: "; cin>>numeros[i];
    }
    
    int menor = 999999;
    
    for(int j=0; j<n; j++){
        if(*dir_numeros < *(dir_numeros+j)){
            menor = *dir_numeros;
            // cout<<"El numero "<<*dir_numeros<<" es par"<<endl;
            // cout<<"Posicion: "<<dir_numeros<<endl;
        }
        else if(*dir_numeros > *(dir_numeros+j)){
            menor = *(dir_numeros+j);  
        }
        dir_numeros++;
    }

    dir_numeros = &menor;


    cout<<"El menor es: "<<menor<<endl;
    return 0;
}


// int main(){
//     int numeros[] = {1, 2, 3, 4, 5};
//     // int *dir_numeros = &numeros[0] --> Declaración del puntero como array, con la primera posición de memoria
//     int *dir_numeros = numeros; //Esta forma es análoga para definir los punteros como arrays   

//     for(int i=0; i<5; i++){
//         cout<<"\nElemento del vector ["<<i<<"]: "<<*dir_numeros++<<endl;
//     }

//     for(int j=0; j<5; j++){
//         cout<<"\nPosicion de memoria de "<<numeros[j]<<" es: "<<dir_numeros++<<endl;
//     }
    
//     return 0;
// }