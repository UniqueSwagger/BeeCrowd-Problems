#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int X;
    string res;
    vector<string> arr;
    while (cin >>X)
    {
        if (X==0)
        {
            break;
        }
        for (int i = 1; i <= X; i++)
        {
            if (i==X)
            {
                res+=to_string(i);
            }
            else res+=to_string(i)+" ";
        }
        arr.push_back(res);
        res="";
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}