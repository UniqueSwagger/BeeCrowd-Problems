#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int M,N;
    vector<string> results;
    while (true)
    {
        cin >> M >> N;
        if (M<=0||N<=0)
        {
            break;
        }
        int start=min(M,N);
        int end=max(M,N);
        int sum=0;
        string result;
        for (int i = start; i <= end; i++)
        {
            result+=to_string(i) + " ";
            sum+=i;
        }
        result+="Sum="+to_string(sum);
        results.push_back(result);
    }
    for (int i=0 ; i < results.size() ; i++)
    {
        cout << results[i] << endl;
    }
    return 0;
}