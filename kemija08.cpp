#include <bits/stdc++.h>
using namespace std;

bool vowel(char c) {
  return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}

int main() {
  int wc = 0;
  string enc;
  while (cin >> enc) {
    string dec;
    for (int i = 0; i < enc.size(); i++) {
      dec += enc[i];
      if (vowel(enc[i])) {
        i += 2;
      }
    }
    if (wc != 0) {
      cout << " ";
    }
    cout << dec;
    wc++;
  }
  return 0;
}
