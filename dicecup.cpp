#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> res(n + m + 1, 0);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      res[i + j]++;
    }
  }
  int hp = *max_element(res.begin(), res.end());
  for (int i = 0; i < res.size(); i++) {
    if (res[i] == hp) {
      cout << i << "\n";
    }
  }
  return 0;
}
