#include <iostream>
using namespace std;

int main() {

    for (double i = 0; i <= 2; i=i+.2)
    {
        double J_start=i+1;
        for (double j = J_start; j < J_start+3; j++)
        {
            cout << "I=" << i << " " << "J=" << j << endl;
        }
    }
    return 0;
}