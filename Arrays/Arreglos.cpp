#include <iostream>
using namespace std;

// int main() {
//     // Declaramos un array de enteros con 5 elementos
//     int numeros[5] = {1, 2, 3, 4, 5};

//     // Accediendo a los elementos del array
//     for(int i = 0; i < 5; i++) {
//         cout << "Elemento en la posicion " << i << " es: " << numeros[i] << endl;
//     }

//     return 0;
// }

int main() {
    // Declaramos una matriz 2D de 3 filas y 3 columnas
    // int matriz[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9}
    // };

    // // Accediendo a los elementos de la matriz
    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout << "Elemento en la posicion [" << i << "][" << j << "] es: " << matriz[i][j] << endl;
    //     }
        
    // }
    // cout<<""<<endl;

    // for(int i = 0; i < 3; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         cout<<" "<<matriz[i][j];
    //     }
    //     cout<<""<<endl;
    // }
    

    // return 0;


    int matriz[2][2];
    matriz[0][0] = 1;
    matriz[0][1] = 0;
    matriz[1][0] = 0;
    matriz[1][1] = 1;

    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<matriz[i][j];
        }
    }

    return 0;
}
