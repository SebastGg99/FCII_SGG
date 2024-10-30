#include <iostream>
#include <stdlib.h>
using namespace std;


/*Para el intercambio de números*/

// void intercambiar(float *, float *);

// int main(){
//     float n1, n2;

//     cout<<"Ingrese el valor del numero 1: "<<endl; cin>>n1;
//     cout<<"Ingrese el valor del numero 2: "<<endl; cin>>n2;

//     intercambiar(&n1, &n2); //Llamada a la función por medio de punteros
    
//     cout<<"\n\nDespues del intercambio \n\n"<<endl;
//     cout<<"El nuevo valor del numero 1 es: "<<n1<<endl;
//     cout<<"El nuevo valor del numero 2 es: "<<n2<<endl;

    
//     return 0;
// }

// void intercambiar(float *dir_n1, float *dir_n2){
//     float aux;

//     aux = *dir_n1; *dir_n1 = *dir_n2; *dir_n2 = aux; //Intercambio de variables con variable auxiliar. 

// }

int hallarMax(int *, int);

int main(){
    const int nElementos = 5;
    int numeros[nElementos] = {3, 5, 2, 8, 12};

    cout<<"El mayor elemento es: "<<hallarMax(numeros, nElementos);
    
    return 0;
}

int hallarMax(int *dirVec, int nElementos){
    int max = 0;

    for(int i=0; i<nElementos; i++){
        if(*(dirVec+i) > max){
            max = *(dirVec + i);
        }
    }

    return max;

}