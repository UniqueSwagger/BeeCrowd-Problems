#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double num;
    cin >> num;
    int numint = (int)num;
    int possBanknotes[] = {100, 50, 20, 10, 5, 2};
    int noteIteration = sizeof(possBanknotes) / sizeof(possBanknotes[0]);
    double decnum = num - numint;

    cout << "NOTAS:" << endl;
    for (int i = 0; i < noteIteration; i++) {
        int count = numint / possBanknotes[i];
        cout << count << " nota(s) de R$ " << fixed << setprecision(2) << (double)(possBanknotes[i]) << endl;
        numint %= possBanknotes[i];
    }

    // Convert the remaining decimal part to cents to avoid precision issues
    int coins = (numint + decnum)*100;
    int possCoins[] = {100, 50, 25, 10, 5, 1}; // Values in cents
    int coinsIteration = sizeof(possCoins) / sizeof(possCoins[0]);

    cout << "MOEDAS:" << endl;
    for (int i = 0; i < coinsIteration; i++) {
        int count = coins / possCoins[i];
        cout << count << " moeda(s) de R$ " << fixed << setprecision(2) << possCoins[i] / 100.0 << endl;
        coins %= possCoins[i];
    }

    return 0;
}
