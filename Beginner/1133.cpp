#include<iostream>
using namespace std;

int main(){
    
    int X,Y;
    cin >>X;
    cin >> Y;
    if (Y>X)
    {
            for (int i = X+1; i <Y; i++)
            {
                if (i%5==2 || i%5==3)
                {
                    cout << i << endl;
                }
            }
    }
    else
    {
            for (int i = Y+1; i <X; i++)
            {
                if (i%5==2 || i%5==3)
                {
                    cout << i << endl;
                }
            }
    }
    return 0;
}