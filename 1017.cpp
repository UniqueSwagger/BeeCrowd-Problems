#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
    double hours,speed , litres;
    cin >> hours;
    cin >> speed;
    litres=(hours*speed)/12;
    cout << fixed << setprecision(3)<< litres << endl;
 
    return 0;
}