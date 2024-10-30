#include "iostream"
#include "fstream"
#include "stdlib.h"
#include "string.h"
using namespace std;

void added();

int main(){
    added();

    system("pause");
    return 0;
}

void added(){
    ofstream archivo;
    string texto;

    archivo.open("Prueba.txt", ios::app); //Abriendo Archivo en modo añadir

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    archivo<<"\nAñadiendo una nueva línea.";

    archivo.close();
}