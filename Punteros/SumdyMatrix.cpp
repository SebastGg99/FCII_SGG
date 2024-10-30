#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void sumarMatriz(int **, int **, int, int);
void resultadoMatriz(int **, int, int);

int **puntero_matriz1, **puntero_matriz2, nFilas, nColumnas;

int main(){
    pedirDatos();
    sumarMatriz(puntero_matriz1, puntero_matriz2, nFilas, nColumnas);
    resultadoMatriz(puntero_matriz1, nFilas, nColumnas);
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de Filas: \n"; cin>>nFilas;
    cout<<"Ingrese el numero de Columnas: \n"; cin>>nColumnas;

    puntero_matriz1 = new int*[nFilas];
    for(int i=0; i<nFilas; i++){
        puntero_matriz1[i] = new int[nColumnas];
    }

    cout<<"\n\n\t Digitando elementos de la Matriz 1:\n\n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>*(*(puntero_matriz1 + i) + j);
        }
    }

    
    puntero_matriz2 = new int*[nFilas];
    for(int i=0; i<nFilas; i++){
        puntero_matriz2[i] = new int[nColumnas];
    }

    cout<<"\n\n\t Digitando elementos de la Matriz 2:\n\n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>*(*(puntero_matriz2 + i) + j);
        }
    }
}

void sumarMatriz(int **puntero_matriz1, int **puntero_matriz2, int nFIlas, int nColumnas){
    for(int i=0; i<nFilas; i++){
        for(int j; j<nColumnas; j++){
            *(*(puntero_matriz1 + i) + j) = *(*(puntero_matriz1 + i) + j) + *(*(puntero_matriz2 + i) + j);

        }
    }
}

void resultadoMatriz(int **puntero_matriz1, int nFilas, int nColumnas){
    cout<<"\n\n\t\tLa suma de las dos matrices es:\n\n";
    
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<*(*(puntero_matriz1 + i) + j)<<" ";
        }
        cout<<"\n";
    }
}