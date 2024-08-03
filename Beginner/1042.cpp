#include <iostream>
#include <algorithm>
using namespace std;

void sort(int n1,int n2,int n3){
    //7 21 -14
  // -14 7 21
    int arr[3]={n1,n2,n3};
      // Insert arr[1]
    if (arr[1] < arr[0])
       swap(arr[0], arr[1]);
 
    // Insert arr[2]
    if (arr[2] < arr[1])
    {
       swap(arr[1], arr[2]);
       if (arr[1] < arr[0])
          swap(arr[1], arr[0]);
    }
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i]<< endl;
    }
}
int main() {

    int n1,n2,n3;
    cin >> n1 >> n2 >> n3;
    sort(n1,n2,n3);
    cout << "\n" ;
    cout << n1 << endl;
    cout << n2 << endl;
    cout << n3 << endl;
    return 0;
}