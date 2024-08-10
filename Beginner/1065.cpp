#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,e,count=0;
    int arr[5]={a,b,c,d,e};
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i]%2==0)
        {
            count++;
        }
    }
    cout << count << " valores pares" << endl;
    return 0;
}