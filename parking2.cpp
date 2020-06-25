#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> pos(n);
    for (int i = 0; i < n; i++) {
      cin >> pos[i];
    }
    sort(pos.begin(), pos.end());
    cout << 2 * (pos[n - 1] - pos[0]) << endl;
  }
  return 0;
}
