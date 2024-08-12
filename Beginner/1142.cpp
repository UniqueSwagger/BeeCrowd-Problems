#include <iostream>
using namespace std;

int main() {

    int N;
    cin >> N;
    int num=1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << num << " ";
            num++;
            if (num%4==0)
            {
                num++;
            }
        }
        cout << "PUM" << endl;
    }
    return 0;
}