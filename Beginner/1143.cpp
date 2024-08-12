#include<iostream>
using namespace std;

int main() {

    int N,num=1;
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
    }
    return 0;
}