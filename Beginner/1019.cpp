#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin >> N;
    int hours,minutes,seconds;
    if (N>=3600){
        
        hours = N/3600;
        N%=3600;
        minutes=N/60;
        seconds=N%60;
    }
    else if (N>=60)
    {
        hours=0;
        minutes = N/60;
        seconds=N%60;
    }
    else {
        hours =0;
        minutes=0;
        seconds=N;
    }
    
    cout << hours << ":" << minutes << ":" << seconds << endl;
 
    return 0;
}