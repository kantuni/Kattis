#include <bits/stdc++.h>
using namespace std;

int main() {
  int P;
  cin >> P;
  while (P--) {
    int k, p, q;
    char c;
    cin >> k >> p >> c >> q;
    vector<char> path;
    while (p != 1 || q != 1) {
      if (p > q) {
        path.push_back('r');
        p -= q;
      } else {
        path.push_back('l');
        q -= p;
      }
    }
    reverse(path.begin(), path.end());
    int l = 0, h = pow(2, path.size());
    for (int i = 0; i < path.size(); i++) {
      if (path[i] == 'r') {
        l += (h - l) / 2;
      } else {
        h -= (h - l) / 2;
      }
    }
    int ans = pow(2, path.size()) + l;
    cout << k << " " << ans << "\n";
  }
  return 0;
}
