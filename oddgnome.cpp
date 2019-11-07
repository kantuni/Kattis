#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int m;
    cin >> m;
    vector<int> g(m);
    for (int i = 0; i < m; i++) {
      cin >> g[i];
    }
    for (int i = 1; i < m; i++) {
      if (g[i] != g[i - 1] + 1) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
  return 0;
}
