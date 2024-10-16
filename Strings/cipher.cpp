#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string caesarCipher(int shift, const string &message) {
  string text = message;
  for (char &c : text) {
    // Shift the character forward within the range of 'A' to 'Z'
    // c = ((c - 'A' + shift) % 26) - 'A';
    // Shift the character backward within the range of 'A' to 'Z'
    c = ((c - 'A' - shift + 26) % 26) + 'A';
  }
  return text;
}

int main() {
  int N;
  cin >> N;
  vector<string> res;
  for (int i = 0; i < N; i++) {
    string message;
    cin >> message;
    int shift;
    cin >> shift;
    res.push_back(caesarCipher(shift, message));
  }
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << endl;
  }
  return 0;
}