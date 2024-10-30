#include <iostream>
#include <stdlib.h>
using namespace std;

void pedirDatos();
void ordenar(int *, int);
void mostrar(int *, int);

int nElementos, *elemento;

int main(){
    pedirDatos(); 
    ordenar(elemento, nElementos); 
    mostrar(elemento, nElementos);
    
    delete [] elemento;
    return 0;
}

void pedirDatos(){
    cout<<"Ingrese el numero de elementos del arreglo: "; cin>>nElementos;

    elemento = new int[nElementos];

    for(int i=0; i<nElementos; i++){
        cout<<"Digite un numero["<<i<<"]: "; cin>>*(elemento+i);//cin>>elemento[i];
    }
}

void ordenar(int *elemento, int nElementos){
    int aux;

    for(int i=0; i<nElementos; i++){
        for(int j=0; j<nElementos; j++){
            if(*(elemento+j) > *(elemento+j+1)){//elemento[j] > elemento[j+1]
                aux = *(elemento+j); *(elemento+j) = *(elemento+j+1); *(elemento+j+1) = aux; 
            }
        }
    }

}

void mostrar(int *elemento, int nElementos){
    cout<<"\n\nMostrando arreglo ordenado: \n\n";
    for(int i; i<nElementos; i++){
        cout<<*(elemento+i)<<" "; //elemento[i]
    }
}