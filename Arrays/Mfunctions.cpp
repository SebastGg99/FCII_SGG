#include "iostream"
using namespace std;

void matrixFunction(int, int);
void matrixProduct(int, int);

int main(){
    
    int filas, columnas;

    cout<<"Ingrese el numero de filas"<<endl;
    cin>>filas;
    cout<<"Ingrese el numero de columnas"<<endl;
    cin>>columnas;
    matrixFunction(filas, columnas);
    
    return 0;
}

void matrixFunction(int filas, int columnas){
    int matriz[10][10];

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<" "<<matriz[i][j];
        }
        cout<<"\n";
    }
}

void matrixProduct(int A[10][10], int B[10][10]){
    
    int filas, columnas;
    int C[10][10];
    
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            C[i][j] = 0;
            for(int k=0; k<filas; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }


    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<" "<<C[i][j];
        }
        cout<<"\n";
    }
}