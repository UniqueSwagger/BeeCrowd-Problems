#include <iostream>
using namespace std;

int main() {

   for (int i = 1; i <=9; i=i+2)
   {
        int J_start=i+6;
        for (int j = J_start; j> J_start-3; j--)
        {
            cout << "I=" << i << " " << "J=" << j << endl;
        }
   }
    return 0;
}