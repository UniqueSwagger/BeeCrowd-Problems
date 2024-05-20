#include <iostream>
#include <iomanip> 
using namespace std;
 
int main() {
 
    double X,Y,calc;
    cin >> X;
    cin >>Y;
    calc=X/Y;
    cout << fixed << setprecision(3) << calc << " km/l" << endl;
 
    return 0;
}