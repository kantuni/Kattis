#include <bits/stdc++.h>
using namespace std;

int main() {
  int wcnt = 0, aecnt = 0;
  string w;
  while (cin >> w) {
    for (int i = 0; i < w.size() - 1; i++) {
      if (w[i] == 'a' and w[i + 1] == 'e') {
        aecnt++;
        break;
      }
    }
    wcnt++;
  }
  double p = 1.0 * aecnt / wcnt;
  if (p >= 0.4) cout << "dae ae ju traeligt va\n";
  else cout << "haer talar vi rikssvenska\n";
  return 0;
}
