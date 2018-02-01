#include <bits/stdc++.h>
using namespace std;

double iszero(double n, int k) {
  while (k--) {
    n = n - (n / 2.0) - 0.5;
  }
  return n;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int k;
    cin >> k;
    double l = 0, h = 100, m;
    while (true) {
      m = (l + h) / 2;
      if (iszero(m, k) < 1e-7) break;
      
      if (iszero(l, k) > iszero(h, k)) {
        l = m;
      } else h = m;
    }
    cout << ceil(m) << "\n";
  }
  return 0;
}
