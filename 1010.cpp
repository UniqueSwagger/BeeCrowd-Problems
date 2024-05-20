#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
    double p1,pp1,up1,p2,pp2,up2,pay;
    cin>> p1>>pp1>>up1;
    cin>> p2>>pp2>>up2;
    pay=pp1*up1+pp2*up2;
    cout << fixed << setprecision(2)<<"VALOR A PAGAR: R$ "<<pay<<endl;
    return 0;
}