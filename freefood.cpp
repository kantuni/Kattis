#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> d(365);
  while (n--) {
    int s, t;
    cin >> s >> t;
    for (int i = s - 1; i < t; i++) {
      d[i] = 1;
    }
  }
  int ans = 0;
  for (int i = 0; i < d.size(); i++) {
    ans += d[i];
  }
  cout << ans << endl;
  return 0;
}
