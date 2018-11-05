#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, h;
  cin >> l >> h;
  int ans = 0;
  for (int i = l; i < h + 1; i++) {
    int j = i;
    set<int> s;
    while (j > 0) {
      int d = j % 10;
      if (d == 0 or i % d > 0) {
        break;
      }
      s.insert(d);
      j /= 10;
    }
    if (j == 0 and s.size() == 6) {
      ans++;
    }
  }
  cout << ans << "\n";
  return 0;
}
