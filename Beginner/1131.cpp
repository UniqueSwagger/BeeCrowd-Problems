#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int x,y,n,count=0,i=0,g=0,e=0;
    vector<string> arr;
    while (cin >> x >>y)
    {
        cin >> n;
        count++;
        arr.push_back("Novo grenal (1-sim 2-nao)");
        if (x>y)
        {
            i++;
        }
        else if (y>x)
        {
            g++;
        }
        else if (x==y)
        {
            e++;
        }
        if (n==2)
        {
            break;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i]<< endl;
    }
    cout << count << " grenais" << endl;
    cout << "Inter:" << i << endl;
    cout << "Gremio:" << g << endl;
    cout << "Empates:" << e << endl;
    if (i==g)
    {
        cout << "Não houve vencedor" << endl;
    }
    else
    {
        if (i>g)
        {
            cout << "Inter venceu mais" << endl;
        }
        else cout << "Gremio venceu mais" << endl;
    }
    return 0;
}