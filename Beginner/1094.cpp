#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N,coelho=0,rato=0,sapo=0;
    double total;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
       int amount;
       string animal;
       cin >> amount >> animal;
       if (animal=="C")
       {
            coelho+=amount;
       }
       else if (animal=="R")
       {
            rato+=amount;
       }
       else if (animal=="S")
       {
            sapo+=amount;
       }
    }
    total=coelho+rato+sapo;
    cout <<"Total: " << total << " cobaias" << endl;
    cout <<"Total de coelhos: " << coelho << endl;
    cout <<"Total de ratos: " << rato << endl;
    cout <<"Total de sapos: " << sapo << endl;
    cout <<"Percentual de coelhos: " << fixed << setprecision(2) << (coelho/total)*100 << " %" << endl;
    cout <<"Percentual de ratos: " << fixed << setprecision(2) << (rato/total)*100 << " %" << endl;
    cout <<"Percentual de sapos: " << fixed << setprecision(2) <<(sapo/total)*100 <<  " %"<< endl;
    return 0;
}