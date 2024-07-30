#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {

    double A,B,C,r1,r2;
    cin >> A >> B >> C ;
    r1 = (-B + sqrt(pow(B, 2) - (4 * A * C))) / (2 * A);
    r2 = (-B - sqrt(pow(B, 2) - (4 * A * C))) / (2 * A);
    if (A==0 || B<C)
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        printf("R1 = %0.5lf\n", r1);
        printf("R2 = %0.5lf\n", r2);;
    }
    return 0;
}