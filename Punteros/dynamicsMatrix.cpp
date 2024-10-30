#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void mostrarMatriz(int **, int, int);

int **puntero_matriz, nFilas, nColumnas;

int main(){
    pedirDatos();
    mostrarMatriz(puntero_matriz, nFilas, nColumnas);

    for(int i=0; i<nFilas; i++){
        delete [] puntero_matriz[i];
    }

    delete [] puntero_matriz;
    
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de Filas: \n"; cin>>nFilas;
    cout<<"Ingrese el numero de Columnas: \n"; cin>>nColumnas;

    puntero_matriz = new int*[nFilas];
    for(int i=0; i<nFilas; i++){
        puntero_matriz[i] = new int[nColumnas];
    }


    cout<<"\n\n\t Digitando elementos de la Matriz:\n\n";
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: "; cin>>*(*(puntero_matriz + i) + j);
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nColumnas){
    cout<<"\n\n\t\tImprimiento Matriz:\n\n";
    
    for(int i=0; i<nFilas; i++){
        for(int j=0; j<nColumnas; j++){
            cout<<*(*(puntero_matriz + i) + j)<<" ";
        }
        cout<<"\n";
    }

}