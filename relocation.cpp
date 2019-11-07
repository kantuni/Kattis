#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  int loc[n];
  for (int i = 0; i < n; i++) {
    cin >> loc[i];
  }
  while (q--) {
    int t;
    cin >> t;
    if (t == 1) {
      int c, x;
      cin >> c >> x;
      loc[c - 1] = x;
    } else {
      int a, b;
      cin >> a >> b;
      int ans = abs(loc[a - 1] - loc[b - 1]);
      cout << ans << endl; 
    }
  }
  return 0;
}
