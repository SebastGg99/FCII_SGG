#include "iostream"
#include "fstream"
#include "stdlib.h"
#include "string.h"
using namespace std;

void leer();

int main(){
    leer();

    system("pause");
    return 0;
}

void leer(){
    ifstream archivo;
    string texto;

    archivo.open("Prueba.txt", ios::in); //Abriendo Archivo en modo lectura

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    while(!archivo.eof()){
        getline(archivo, texto);
        cout<<texto<<endl;
    }

    archivo.close();
}