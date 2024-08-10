#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    for (int i = X; i < X+12; i++)
    {
        if (i%2!=0)
        {
            cout << i << endl;
        }
    }
    return 0;
}