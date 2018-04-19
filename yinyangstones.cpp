#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size() - 2; i++) {
    int whites = 0, blacks = 0;
    for (int j = 0; j < 3; j++) {
      if (s[i + j] == 'W') {
        whites++;
      } else {
        blacks++;
      }
    }
    if (abs(whites - blacks) == 1) {
      char color = whites > blacks ? 'W' : 'B';
      s = s.substr(0, i) + color + s.substr(i + 3);
      i = 0;
    }
  }
  cout << (s == "BW" or s == "WB" ? 1 : 0) << "\n";
  return 0;
}
