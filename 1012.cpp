#include <iostream>
#include <cmath> 
#include <iomanip>
using namespace std;
 
int main() {
 
    double A,B,C,pi = 3.14159,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
    cin >> A >> B >> C;
    TRIANGULO=0.5*A*C;
    CIRCULO=pi*pow(C,2);
    TRAPEZIO=0.5*(A+B)*C;
    QUADRADO=pow(B,2);
    RETANGULO=A*B;
    
    cout << fixed << setprecision(3)<<"TRIANGULO: "<<TRIANGULO<<endl;
    cout << fixed << setprecision(3)<<"CIRCULO: "<<CIRCULO<<endl;
    cout << fixed << setprecision(3)<<"TRAPEZIO: "<<TRAPEZIO<<endl;
    cout << fixed << setprecision(3)<<"QUADRADO: "<<QUADRADO<<endl;
    cout << fixed << setprecision(3)<<"RETANGULO: "<<RETANGULO<<endl;
 
    return 0;
}