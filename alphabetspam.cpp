#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int w = 0, lc = 0, uc = 0, sym = 0;
  for (char c: s) {
    if (c == '_') {
      w++;
    } else if (c >= 'a' and c <= 'z') {
      lc++;
    } else if (c >= 'A' and c <= 'Z') {
      uc++;
    } else {
      sym++;
    }
  }
  cout << fixed << setprecision(7);
  cout << 1.0 * w / s.size() << endl;
  cout << 1.0 * lc / s.size() << endl;
  cout << 1.0 * uc / s.size() << endl;
  cout << 1.0 * sym / s.size() << endl;
  return 0;
}
