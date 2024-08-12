#include<iostream>
using namespace std;

int main() {
    int X,Z,sum=0,count=0;
    while (cin >> X >> Z)
    {
        while (Z<=X)
        {
            cin >> Z;
            continue;
        }
        while (sum<Z)
        {
            sum+=X;
            X++; 
            count++;
        }
        cout << count << endl;
        break;
    }
    return 0;
}