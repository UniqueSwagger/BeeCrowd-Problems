#include <iostream>
#include<iomanip> 
using namespace std;
 
int main() {
 
    double n1,n2,n3,salary;
    cin>>n1;
    cin>>n2;
    cin>>n3;
    salary=n2*n3;
    cout << "NUMBER = "<< n1<<endl;
    cout<<fixed<<setprecision(2)<< "SALARY = U$ "<<salary<<endl;
 
    return 0;
}