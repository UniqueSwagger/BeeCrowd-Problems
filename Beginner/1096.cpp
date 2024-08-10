#include <iostream>
using namespace std;

int main() {

    int i=1,j=7;
    while (i!=11&&j!=4)
    {
        cout << "I=" << i << " " << "J=" << j << endl;
        j--;
        if (j==4)
        {
            j=7;
            i=i+2;
        }
    }
    return 0;
}