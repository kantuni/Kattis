#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> outcome(6), index(100);
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    index[a - 1] = i + 1;
    outcome[a - 1]++;
  }
  int ans = -1;
  for (int i = 5; i >= 0; i--) {
    if (outcome[i] == 1) {
      ans = index[i];
      break;
    }
  }
  if (ans == -1) {
    cout << "none" << "\n";
  } else {
    cout << ans << "\n";
  }
  return 0;
}
