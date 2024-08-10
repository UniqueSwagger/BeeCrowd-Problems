#include <iostream>
#include <vector>
#include <climits>
using namespace std;
 
int main() {
 
    vector<int> numbers;
    int maxNumber=INT_MIN,index;
    for (int i = 0; i < 100; i++)
    {
        int x;
        cin >> x; 
        numbers.push_back(x);
    }
    for (int i = 0; i < 100; i++)
    {
        if (numbers[i]>maxNumber)
        {
            maxNumber=numbers[i];
            index=i+1;
        }
    }
    cout << maxNumber << endl;
    cout << index << endl;
    return 0;
}