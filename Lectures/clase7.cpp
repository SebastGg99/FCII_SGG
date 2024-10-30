#include "iostream"
#include "string"
using namespace std;

int main(){
    

    int gal = 1;
    float litro;

    do{
        litro = gal/0.2642;
        cout<<gal<<" gal, equivale a "<<litro<<" L"<<endl;
        gal++;

    }while(gal<=20);
    
    return 0;

    // string clave;

    // do {

    //     cout<<"Ingrese la clave: "<<endl;
    //     cin>>clave;

    //     if( clave == "123"){
    //         cout<<"Aceptado"<<endl;
    //         }
    //     else if(clave == "x"){
    //         break;
    //     }

    // }while(clave != "123");
    // return 0;
}