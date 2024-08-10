#include <iostream> 
using namespace std;

int main() {
    int N,in=0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        long long X;
        cin >> X;
        if (X>=10 && X<=20)
        {
            in++;
        }
    }
    cout << in << " in" << endl;
    cout << N-in << " out" << endl;
    return 0;
}