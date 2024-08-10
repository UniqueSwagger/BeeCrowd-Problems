#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
 
    int x,y;
    vector<string> results;
    while(cin >> x >> y){
        if(x==y){
            break;
        }
        else if(x>y){
            results.push_back("Decrescente");
        }
        else results.push_back("Crescente");
    }
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i] << endl;
    }
 
    return 0;
}