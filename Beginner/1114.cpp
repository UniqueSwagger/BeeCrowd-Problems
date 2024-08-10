#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int pass;
    vector<string> results;
    while (cin >> pass)
    {
        if (pass==2002)
        {
            results.push_back("Acesso Permitido");
            break;
        }
        else results.push_back("Senha Invalida");
    }
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i] << endl;
    }
    return 0;
}