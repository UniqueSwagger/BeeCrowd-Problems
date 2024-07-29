#include <iostream>
using namespace std;
 
int main() {
 
    int days,months,years;
    cin >> days;
    if(days >=365){
        years=days/365;
        days%=365;
        months = days/30;
        days%=30;

    }
    else if (days>=30)
    {
        years=0;
        months=days/30;
        days=days%30;
    }
    else
    {
        years=0;
        months=0;
    }
    cout << years << " ano(s)" <<endl;
    cout << months << " mes(es)" <<endl;
    cout << days << " dia(s)" <<endl;
 
    return 0;
}