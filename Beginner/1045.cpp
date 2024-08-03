// if A ≥ B + C, write the message: NAO FORMA TRIANGULO
// if A2 = B2 + C2, write the message: TRIANGULO RETANGULO
// if A2 > B2 + C2, write the message: TRIANGULO OBTUSANGULO
// if A2 < B2 + C2, write the message: TRIANGULO ACUTANGULO
// if the three sides are the same size, write the message: TRIANGULO EQUILATERO
// if only two sides are the same and the third one is different, write the message: TRIANGULO ISOSCELES

#include <iostream>
using namespace std;



int main() {

    double A,B,C;
    cin >> A >> B >> C;
    double arr[3]={A,B,C};
    if (arr[1]>arr[0])
        swap(arr[1],arr[0]);
    if(arr[2]>arr[1]){
        swap(arr[2],arr[1]);
        if(arr[1]>arr[0])
            swap(arr[1],arr[0]);
    }
    A=arr[0];
    B=arr[1];
    C=arr[2];
    if (A>= (B+C))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else
    {
        if (A*A==(B*B+C*C))
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }
    if (A*A>(B*B+C*C))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }
    if (A*A<(B*B+C*C))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if (A==B && B==C && C==A)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if (A==B || B==C || C==A)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }
    }
    return 0;
}