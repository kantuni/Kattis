#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int mj = -1, ans = -1;
  for (int i = 0; i < n; i++) {
    int j;
    cin >> j;
    if (mj == -1 or j < mj) {
      mj = j;
      ans = i;
    }
  }
  cout << ans << "\n";
  return 0;
}
