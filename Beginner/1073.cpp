#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    long long square;

    for (int i = 1; i <= N; i++)
    {
        square=pow(i,2);
        if (i%2==0)
        {
           cout << i << "^2 = " << square << endl;
        }
    }
    return 0;
}