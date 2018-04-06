#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++) {
      q.push(make_pair(i, -1));
    }
    vector<pair<int, int>> perm(n);
    for (int i = 1; i <= n; i++) {
      for (int j = 0; j < i; j++) {
        q.push(q.front());
        q.pop();
      }
      q.front().second = i;
      perm[i - 1] = q.front();
      q.pop();
    }
    sort(perm.begin(), perm.end());
    for (auto p: perm) {
      cout << p.second << " ";
    }
    cout << "\n";
  }
  return 0;
}
