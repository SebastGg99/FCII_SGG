/*Punteros - Declaración de Punteros

variable = &n: La dirección de n
*n: La variable cuya dirección está almacenada en n*/

#include "iostream"
#include "conio.h"
using namespace std;

// int main(){
//     int num, *dir_num;
    
//     num = 20;
//     dir_num = &num;

//     cout<<"Numero: "<<num<<endl;
//     cout<<"Direccion de memoria: "<<&num<<endl;
//     cout<<"\n";
//     cout<<"Numero: "<<*dir_num<<endl;
//     cout<<"Direccion de memoria: "<<dir_num<<endl;

//     getch();
//     return 0;
// }


int main(){
    int i = 2, num, *dir_num;

    cout<<"Ingrese un numero entero: "<<endl; cin>>num;
    dir_num = &num;

    if(*dir_num == 1){
        cout<<"\nEl numero "<<*dir_num<<" NO es primo.\n";
    }
    else if(*dir_num == 2){
        cout<<"\nEl numero "<<*dir_num<<" ES primo.\n";
    }
    
    for(i; i<*dir_num; i++){
        int mod = *dir_num%i;
        if(mod == 0){
            cout<<"\nEl numero "<<*dir_num<<" NO es primo.\n";
            break;
        }
        else{
            cout<<"\nEl numero "<<*dir_num<<" ES primo.\n";
            break;
        }
    }
    
    cout<<"\nLa direccion de memoria del numero "<<*dir_num<<" es: "<<dir_num<<endl;
    return 0;
}