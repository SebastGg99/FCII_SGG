#include "iostream"
#include "cmath"
using namespace std;


int main(){
    
    float lado = 1, suma = 0;
    int orden;

    cout<<"ingrese un orden: "<<endl;
    cin>>orden;

    for(int i = 0; i <= orden; i++){

        float y = pow(lado, 2)/pow(2, i);
        suma = suma + y;

    }

    cout<<"La suma de areas es aproximadamente: "<<suma<<endl;
    
    return 0;
}