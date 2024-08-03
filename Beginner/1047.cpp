#include <iostream>
using namespace std;
int main() {
    int ih,im,fh,fm,dm;
    cin >> ih >> im >> fh >> fm;
    dm=(fh*60+fm)-(ih*60+im);
    if (dm==0)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else if (dm>=60)
    {
        cout << "O JOGO DUROU " << dm/60 << " HORA(S) E " << dm%60 << " MINUTO(S)" << endl;
    }
    else if (dm<0)
    {
        dm+=1440;
        cout << "O JOGO DUROU " << dm/60 << " HORA(S) E " << dm%60 << " MINUTO(S)" << endl;

    }
    else cout << "O JOGO DUROU 0 HORA(S) E " << dm << " MINUTO(S)" << endl;
    return 0;
}