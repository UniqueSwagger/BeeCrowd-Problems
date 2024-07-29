#include <iostream>
using namespace std;

int main() {

    long long int x;
    cin >> x;
    int possBanknotes[]={100, 50, 20, 10, 5, 2,1};
    int numPossBanknotes=sizeof(possBanknotes)/sizeof(possBanknotes[0]);
    cout << x << endl;
    for (int i = 0; i <numPossBanknotes ; i++)
    {
        int count=x/possBanknotes[i];
        cout << count << " nota(s) de R$ " << possBanknotes[i] << ",00" << endl;
        x=x%possBanknotes[i];
    }

    return 0;
}