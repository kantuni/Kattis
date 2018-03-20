#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int w = 0, lc = 0, uc = 0, sym = 0;
  for (auto c: s) {
    if (c == '_') w++;
    else if (c >= 'a' && c <= 'z') lc++;
    else if (c >= 'A' && c <= 'Z') uc++;
    else sym++;
  }
  printf("%.7f\n", 1.0 * w / s.size());
  printf("%.7f\n", 1.0 * lc / s.size());
  printf("%.7f\n", 1.0 * uc / s.size());
  printf("%.7f\n", 1.0 * sym / s.size());
  return 0;
}
