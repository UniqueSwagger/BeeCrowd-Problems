#include <iostream>
using namespace std;

int main() {
    double a,b,c,d,e,f,count=0;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;
    cin >> f;
    double arr[6]={a,b,c,d,e,f};
    for (int i = 0; i < 6; i++)
    {
        if (arr[i]>0)
        {
            count++;
        }
    }
    cout << count << " valores positivos" << endl;
    return 0;
}