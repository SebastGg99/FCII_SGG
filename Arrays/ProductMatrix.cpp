#include "iostream"
using namespace std;

int main(){
    
    int filasA, columnasA, filasB, columnasB; float A[10][10], B[10][10], C[10][10]; //Declaramos las variables. 
    
    /*Ingresamos el número de filas y de columnas de la primera matrriz*/
    cout<<"Ingrese el numero de filas de la matriz A"<<endl; cin>>filasA;
    cout<<"Ingrese el numero de columnas de la matriz A"<<endl; cin>>columnasA;

    /*Construimos la primera matriz, con los valores ingresados*/
    for(int i=0; i<filasA; i++){
        for(int j=0; j<columnasA; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>A[i][j];
        }
    }

    /*Ingresamos el número de filas y de columnas de la segunda matrriz*/
    cout<<"\nIngrese el numero de filas de la matriz B"<<endl; cin>>filasB;
    cout<<"Ingrese el numero de columnas de la matriz B"<<endl; cin>>columnasB;

    /*Construimos la segunda matriz, con los valores ingresados*/
    for(int i=0; i<filasB; i++){
        for(int j=0; j<columnasB; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>B[i][j];
        }
    }

    /*Imprimimos la primera matriz completa*/
    cout<<"\nMatriz A:"<<endl;
    
    for(int i=0; i<filasA; i++){
        for(int j=0; j<columnasA; j++){
            cout<<" "<<A[i][j];
        }
        cout<<"\n";
    }
    
    /*Imprimimos la segunda matriz completa*/
    cout<<"\nMatriz B:"<<endl;

    for(int i=0; i<filasB; i++){
        for(int j=0; j<columnasB; j++){
            cout<<" "<<B[i][j];
        }
        cout<<"\n";
    }
    
    
    /*Código para multiplicación de matrices*/
    //Definimos la condición de multiplicación.
    if(columnasA == filasB){
        for(int i=0; i<filasA; i++){
            for(int j=0; j<columnasB; j++){
                C[i][j] = 0;
                for(int k=0; k<columnasA; k++){
                    C[i][j] += A[i][k]*B[k][j]; //Multiplicamos filas por columnas.
                }
            }
        }

        cout<<"\nMatriz C:"<<endl;

        for(int i = 0; i<filasA; i++) {
            for(int j = 0; j<columnasB; j++) {
                cout<<" "<<C[i][j];
        }
        cout<<""<<endl;
     }

    }
    //En caso contrario, retornamos mensaje de error.
    else{
        cout<<"\nMatrices NO Validas"<<endl;
    }

    return 0;
}