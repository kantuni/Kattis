#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, h;
  cin >> l >> h;
  int ans = 0;
  int f[10];
  for (int i = l; i < h + 1; i++) {
    memset(f, 0, sizeof f);
    int n = i;
    while (n > 0) {
      int d = n % 10;
      if (d == 0 or f[d] > 0 or i % d > 0) {
        break;
      }
      f[d]++;
      n /= 10;
    }
    if (n == 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
