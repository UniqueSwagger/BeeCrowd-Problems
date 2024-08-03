#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    double A,B,C;
    cin >> A >> B >> C ;
    if ((A+B)>C && (A+C)>B &&(B+C)>A )
    {
        printf("Perimetro = %.1lf\n",A+B+C);
    }
    else printf("Area = %.1lf\n",0.5*(A+B)*C);
    return 0;
}