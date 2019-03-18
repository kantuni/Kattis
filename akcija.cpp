#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> c(n);
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  sort(c.rbegin(), c.rend());
  long long ans = 0;
  for (int i = 0; i < n; i += 3) {
    ans += c[i];
    if (i + 1 < n) {
      ans += c[i + 1];
    }
  }
  cout << ans << endl;
  return 0;
}
