#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countLEDs(const string &input) {
  string num = input;
  int total = 0;
  int segment[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
  for (char &digit : num) {
    total += segment[digit - '0'];
  }
  return total;
}

int main() {
  int N;
  cin >> N;
  vector<int> res;
  string num;
  for (int i = 0; i < N; i++) {
    cin >> num;
    res.push_back(countLEDs(num));
  }
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " leds" << endl;
  }
  return 0;
}