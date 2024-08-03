#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

double price (int code){
    if (code==1)
    {
        return 4;
    }
    else if (code==2)
    {
        return 4.5;
    }
    else if (code==3)
    {
        return 5;
    }
    else if (code==4)
    {
        return 2;
    }
    else if (code==5)
    {
        return 1.5;
    }
}

int main() {

    int X,Y;
    cin >> X >> Y;
    double total= price(X)*Y;
    printf("Total: R$ %.2lf\n",total);
    return 0;
}