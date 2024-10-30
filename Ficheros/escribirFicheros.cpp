#include "iostream"
#include "fstream"
#include "stdlib.h"
using namespace std;

void escribir();

int main(){
    escribir();

    system("pause");
    return 0;
}

void escribir(){
    ofstream archivo;

    archivo.open("Prueba.txt", ios::out); //Abriendo Archivo en modo escritura

    if(archivo.fail()){
        cout<<"No se pudo abrir el archivo"<<endl;
        exit(1);
    }

    archivo<<"Hola qué tal? Estoy probando una forma de escribir archivos de texto desde C++";

    archivo.close();
}