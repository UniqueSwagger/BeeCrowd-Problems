#include<iostream>
using namespace std;

int main() {

    int A,N,sum=0;
    while (cin >> A >> N)
    {
        while (N<=0)
        {
            cin >> N;
            continue;
        }
        for (int i = A; i < A+N; i++)
        {
            sum+=i;
        }
        cout << sum << endl;
        break;
    }
    return 0;
}