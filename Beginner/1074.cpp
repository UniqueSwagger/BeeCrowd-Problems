#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> arr;
    for (int i = 0; i < N; i++)
    {
        long long X;
        cin >> X;
        arr.push_back(X); 
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i]==0)
        {
            cout << "NULL" << endl;
        }
        else if (arr[i]%2==0)
        {
            if (arr[i]>0)
            {
                cout << "EVEN POSITIVE" << endl;
            }
            else cout << "EVEN NEGATIVE" << endl;
        }
        else if (arr[i]%2!=0)
        {
            if (arr[i]>0)
            {
                cout << "ODD POSITIVE" << endl;
            }
            else cout << "ODD NEGATIVE" << endl;
        }
    }
    return 0;
}