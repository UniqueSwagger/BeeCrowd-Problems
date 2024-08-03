#include <iostream>
using namespace std;

int main() {
    int start,end,duration;
    cin >> start >> end;
    duration=end-start;
    if (duration==0)
    {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }
    else if (duration<0)
    {
        cout << "O JOGO DUROU " << 24-start+end << " HORA(S)" << endl;
    }
    else cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;
    return 0;
}