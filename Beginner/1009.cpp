#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
    string name;
    double n1,n2,total;
    cin >> name;
    cin >> n1;
    cin >> n2;
    total=n1+(n2*0.15);
    cout<<fixed<<setprecision(2)<<"TOTAL = R$ "<<total<<endl;
 
    return 0;
}