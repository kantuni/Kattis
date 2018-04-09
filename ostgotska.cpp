#include <bits/stdc++.h>
using namespace std;

int main() {
  int wcnt = 0, aecnt = 0;
  string w;
  while (cin >> w) {
    if (w.find("ae") != string::npos) aecnt++;
    wcnt++;
  }
  double p = 1.0 * aecnt / wcnt;
  if (p >= 0.4) cout << "dae ae ju traeligt va\n";
  else cout << "haer talar vi rikssvenska\n";
  return 0;
}
