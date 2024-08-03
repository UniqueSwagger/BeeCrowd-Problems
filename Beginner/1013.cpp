#include <iostream>
#include <cmath> 
using namespace std;
int biggestNum(int a,int b){
    int maiorAB = (a+b+abs(a-b))/2;
    return maiorAB;
    
} 
int main() {
 
    int A,B,C;
    cin >> A >> B >> C;
    int maxAB=biggestNum(A,B);
    int maxABC=biggestNum(maxAB,C);
    cout << maxABC << " eh o maior"<<endl;
 
    return 0;
}

