#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  int start = 0, end = 0, ans = 0;
  bool on = false;
  while (n--) {
    int t;
    cin >> t;
    on = !on;
    if (on) {
      start = t;
    } else {
      end = t;
      ans += end - start;
    }
  }
  if (on) {
    cout << "still running" << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}
