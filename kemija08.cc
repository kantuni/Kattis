#include <bits/stdc++.h>
using namespace std;

bool isvowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
  int wc = 0;
  string enc;
  while (cin >> enc) {
    string dec;
    for (int i = 0; i < enc.size(); i++) {
      dec += enc[i];
      if (isvowel(enc[i])) i += 2;
    }
    if (wc != 0) cout << " ";
    cout << dec;
    wc++;
  }
  return 0;
}
