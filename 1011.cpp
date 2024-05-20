#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;
 
int main() {
 
    double pi=3.14159,R,volume;
    cin >> R;
    volume=(4/3.0)*pi*pow(R,3);
    cout<< fixed << setprecision(3)<<"VOLUME = "<<volume<<endl;
 
    return 0;
}