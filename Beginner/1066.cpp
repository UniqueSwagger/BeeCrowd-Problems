#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,e,evenCount=0,oddCount=0,posCount=0,negCount=0;
    int arr[5]={a,b,c,d,e};
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        if (arr[i]>0)
        {
            posCount++;
            if (arr[i]%2==0)
            {
                evenCount++;
            }
            else oddCount++;
        }
        else if (arr[i]==0)
        {
            evenCount++;
        }
        else
        {
            negCount++;
            if (arr[i]%2==0)
            {
                evenCount++;
            }
            else oddCount++;
        }
    }
    cout << evenCount << " valor(es) par(es)" << endl;
    cout << oddCount << " valor(es) impar(es)" << endl;
    cout << posCount << " valor(es) positivo(s)" << endl;
    cout << negCount << " valor(es) negativo(s)" << endl;
    return 0;
}