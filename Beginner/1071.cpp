#include <iostream>
using namespace std;

int main() {

    int X,Y,sum=0;
    cin >>X;
    cin >>Y;

    if (X>Y)
    {
        for (int i = Y+1; i < X; i++)
        {
           if (i%2!=0)
           {
                sum+=i;
           } 
        }
    }
    else if (Y>X)
    {

         for (int i = X+1; i < Y; i++)
        {
           if (i%2!=0)
           {
                sum+=i;
           } 
        }
    }
    cout << sum << endl;
    return 0;
}