#include <iostream>
#include <vector>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main(){
    
    int N;
    double avg;
    vector<double> arr;
    cin >> N;
    for(int i=0;i<N;i++){
        double x,y,z;
        cin >> x >> y >> z;
        avg= (x*2+y*3+z*5)/10;
        arr.push_back(avg);
    }
    for (int i = 0; i < N; i++)
    {
        cout << fixed << setprecision(1) << arr[i] << endl;
    }
    
    return 0;
}