#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    double a,b,c,d,e,f,count=0,sum=0;
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
            sum+=arr[i];
        }
    }
    cout << count << " valores positivos" << endl;
    printf("%.1lf\n",sum/count);
    return 0;
}