#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N;
    vector<int> arr;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int X,Y,sum=0;
        cin >> X >> Y;
        if (X>Y)
        {
            for (int j = Y+1; j < X; j++)
            {
                if (j%2!=0)
                {
                    sum+=j;
                }
            } 
        }
        else if (Y>X)
        {
             for (int j = X+1; j < Y; j++)
            {
                if (j%2!=0)
                {
                    sum+=j;
                }
            }
        }
        arr.push_back(sum);
        
    }
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}