#include <bits/stdc++.h>
#define INF (int) 1e9
using namespace std;

int main() {
  int t = 1;
  string line;
  while (getline(cin, line)) {
    istringstream iss(line);
    int n;
    iss >> n;
    vector<int> x(n);
    int mn = INF, mx = -INF;
    for (int i = 0; i < n; i++) {
      iss >> x[i];
      mn = min(mn, x[i]);
      mx = max(mx, x[i]);
    }
    cout << "Case " << t << ": ";
    cout << mn << " " << mx << " ";
    cout << mx - mn << endl;
    t++;
  }
  return 0;
}
