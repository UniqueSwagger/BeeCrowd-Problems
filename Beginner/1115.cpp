#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int X,Y;
    vector<string> results;
    while (cin >> X >>Y)
    {
        if (X==0||Y==0)
        {
            break;
        }
        else if (X>0 && Y>0)
        {
            results.push_back("primeiro");
        }
        else if (X>0 && Y<0)
        {
            results.push_back("quarto");
        }
        else if (X<0 && Y<0)
        {
            results.push_back("terceiro");
        }
        else if (X<0 && Y>0)
        {
            results.push_back("segundo");
        }
    }
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i] << endl;
    }
    return 0;
}