/*Asignación dinámica de arreglos

- new: Reserva el número de bytes solicitados por la declaración.
- delete: Libera un bloque de bytes reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlas en un arreglo dinámico.*/

#include "iostream"
#include "conio.h"
#include "stdlib.h" //Funciones new y delete
using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif;

int main(){
    pedirNotas();
    mostrarNotas();

    delete[] calif;//Liberando espacio.
    getch();
    return 0;
}

void pedirNotas(){
    cout<<"Digite el numero de calificaciones: "; cin>>numCalif;

    calif = new int[numCalif]; //Creando arreglo dinámico.

    for(int i=0; i<numCalif; i++){
        cout<<"Ingrese una nota: "; cin>>calif[i];
    }
}

void mostrarNotas(){
    cout<<"\n\nMostrando notas del usuario\n\n"<<endl;
    for(int i=0; i<numCalif; i++){
        cout<<calif[i]<<endl;
    }

}