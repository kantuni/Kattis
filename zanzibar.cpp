#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<int> num;
    while (true) {
      int n;
      cin >> n;
      if (n == 0) {
        break;
      }
      num.push_back(n);
    }
    int ans = 0;
    for (int i = 0; i < num.size() - 1; i++) {
      if (num[i + 1] > 2 * num[i]) {
        ans += num[i + 1] - 2 * num[i];
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
