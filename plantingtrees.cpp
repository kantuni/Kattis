#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i];
  }
  sort(t.rbegin(), t.rend());
  int l = t[0], ans = 1;
  for (int i = 1; i < n; i++) {
    l--, ans++;
    if (t[i] > l) {
      l = t[i];
    }
  }
  ans += l;
  cout << ans + 1 << endl;
  return 0;
}
