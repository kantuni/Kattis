#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int l, n;
    cin >> l >> n;
    int mn = 0, mx = 0;
    while (n--) {
      int p;
      cin >> p;
      mn = max(mn, min(p, l - p));
      mx = max(mx, max(p, l - p));
    }
    cout << mn << " " << mx << endl;
  }
  return 0;
}
