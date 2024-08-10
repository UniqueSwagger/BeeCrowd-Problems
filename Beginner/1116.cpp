#include <iostream>
#include <vector>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    double N,X,Y;
    vector<string> arr;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> X >>Y;
        if (Y==0)
        {
            arr.push_back("divisao impossivel");
        }
        else
        {
            ostringstream num;
            num << fixed << setprecision(1) << (X/Y);
            arr.push_back(num.str());
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}