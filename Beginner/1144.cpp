#include<iostream>
using namespace std;

int main() {

    long long N,num=1;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            num*=i;
            if (j==2)
            {
                cout << num << endl;
            }
            else cout << num << " ";
        }
        num=1;
        for (int k = 0; k < 3; k++)
        {
            num*=i;
            if (k==2)
            {
                cout << num+1 << endl;
            }
            else if (k==1)
            {
                cout << num+1 << " ";
            }
            else cout << num << " ";
        }
        num=1;
    }
    return 0;
}