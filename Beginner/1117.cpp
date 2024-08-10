#include <iostream>
#include <iomanip>  // for std::fixed and std::setprecision
#include <vector>
#include <sstream>
using namespace std;

int main() {
    float score1, score2;
    int count = 0;
    float sum = 0.0;
    vector<string> res;
    while (count < 2) {
        float input;
        cin >> input;
        
        if (input < 0 || input > 10) {
            res.push_back("nota invalida");
        } else {
            if (count == 0) {
                score1 = input;
                count++;
            } else {
                score2 = input;
                count++;
            }
            sum += input;
        }
    }

    double average = sum / 2;
    ostringstream num;
    num << fixed << setprecision(2) << average;
    string avg;
    avg+="media = "+num.str();
    res.push_back(avg);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}
