#include "iostream"
#include "string"
using namespace std;

int main(){
    
    int option;
    float Temp, NewTemp;
    
    
    //caso1: °C -> °F:   x°C*1.8 + 32 = y°F
    //caso2: °F -> °C:   (y°F - 32)*0.55 = x°C
    //caso3: °C -> K:    x°C + 273.15 = yK
    //caso4:  K -> °C:    yK - 273.15 = x°C
    //caso5: °F -> K:    (x°F - 32)*0.55 + 273.15 = yK
    //caso6:  K -> °F:    (yK - 273.15)*1.8 + 32 = x°F
    
    do{
        cout<<"Ingrese el valor de temperatura adimensional: "<<endl;
        cin>>Temp;
        
        cout<<"Ingrese la opción que quiere seleccionar: "<<endl;
        cin>>option;

        switch(option){
        case 1:
        cout<<endl;
        NewTemp = (Temp*1.8) + 32;
        cout<<Temp<<" °C -> "<<NewTemp<<" °F"<<endl;
        cout<<endl;
        break;

        case 2:
        NewTemp = (Temp - 32)*0.55;
        cout<<Temp<<" °F -> "<<NewTemp<<" °C"<<endl;
        cout<<endl;
        break;

        case 3:
        NewTemp = Temp + 273.15;
        cout<<Temp<<" °C -> "<<NewTemp<<" K"<<endl;
        cout<<endl;
        break;

        case 4:
        NewTemp = Temp - 273.15;
        cout<<Temp<<" K -> "<<NewTemp<<" °C"<<endl;
        cout<<endl;
        break;

        case 5:
        NewTemp = (Temp - 32)*0.55 + 273.15;
        cout<<Temp<<" °F -> "<<NewTemp<<" K"<<endl;
        cout<<endl;
        break;

        case 6:
        NewTemp = (Temp - 273.15)*1.8 + 32;
        cout<<Temp<<" K -> "<<NewTemp<<" °F"<<endl;
        cout<<endl;
        break;

    }

    }while(option <= 6);
    
    return 0;
}