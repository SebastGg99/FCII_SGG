#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float radio, circle, triangle, area;
    double pi = M_PI;

    cout <<"Ingrese el valor del radio del círculo en metros: "<< endl;
    cin >> radio;

    //El área del círculo es igual a pi*radio²
    circle = pi*radio*radio;
    
    //Por otro lado, el área del triángulo es igual a base*altura/2 ...
    //Esta base y altura se calculan en términos del lado del triángulo
    //El lado del triángulo se calcula en términos del radio, utilizando la ley de cosenos y el hecho de que el ángulo interno en este triángulo es de 120°
    //Con la ley de cosenos obtenemos que el valor del lado es igual a sqrt(3)*radio ...
    //Y con el teorema de pitágoras sabemos que el valor de la altura es sqrt(3)*lado/2
    //Por lo tanto, el valor del área del triángulo es igual a sqrt(3)*3*radio²/4
    triangle = 3*sqrt(3)*radio*radio/4;
    
    //El área sombreada es igual a la resta entre el área del círculo y el área del triángulo inscrito.
    area = circle - triangle;

    cout <<"El valor del área sombreada es igual a: "<<area<<"m²"<<endl;
    
    return 0;
}