#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  for (int i = 0; i < n; i++) cin >> t[i];
  sort(t.rbegin(), t.rend());
  int left = t[0], ans = 1;
  for (int i = 1; i < n; i++) {
    left--;
    ans++;
    if (t[i] > left) left = t[i];
  }
  ans += left;
  cout << ans + 1 << "\n";
  return 0;
}
