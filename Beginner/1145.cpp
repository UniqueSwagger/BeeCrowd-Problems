#include<iostream>
#include<vector>
using namespace std;
int main() {

    long long X,Y;
    cin >> X >> Y;
    vector<int> num;
    for (int i = 1; i <= Y; i++)
    {
        num.push_back(i);
    }
    for (int i = 1; i <= Y; i++)
    {
        if (i%X==0)
        {
            cout <<num[i-1]<< endl;
        }
        else cout << num[i-1] << " " ;  
    }
    return 0;
}