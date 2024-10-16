#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string encryptString(const string &input) {
  string encrypted = input;

  // First, each uppercase or lowercase letter must be shifted
  // three positions to the right, according to the ASCII table:
  for (char &c : encrypted) {
    if (isalpha(c)) {
      c += 3;
    }
  }

  // Reverse the entire string
  reverse(encrypted.begin(), encrypted.end());

  // All characters from the half on (truncated) must be moved
  // one position to the left in ASCII (including non-alphabetic)
  for (int i = encrypted.size() / 2; i < encrypted.size(); i++) {
    encrypted[i] -= 1;
  }

  return encrypted;
}

int main() {
  int N;
  vector<string> res;
  cin >> N;
  cin.ignore();  // Ignore the newline character after the integer input

  for (int i = 0; i < N; i++) {
    string s;
    getline(cin, s);
    res.push_back(encryptString(s));
  }

  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << endl;
  }

  return 0;
}
