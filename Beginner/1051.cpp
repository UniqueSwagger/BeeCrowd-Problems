#include <iostream>
using namespace std;
#include <stdio.h>
int main() {

    double salary, tax;
    cin >> salary;
    if (salary <=2000)
    {
        tax=0;
    }
    else if (salary<=3000)
    {
        tax=(salary-2000)*.08;
    }
    else if (salary<=4500)
    {
        tax=1000*.08+(salary-3000)*.18;
    }
    else
    {
        tax=1000*.08+1500*.18 + (salary-4500)*.28;
    }


    if (tax==0)
    {
        cout << "Isento" <<endl;
    }
    else
    {
        printf("R$ %.2lf\n",tax);
    }
    return 0;
}