#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> l1(n), l2(n);
    for (int i = 0; i < n; i++) {
      cin >> l1[i];
    }
    for (int i = 0; i < n; i++) {
      cin >> l2[i];
    }
    unordered_map<int, int> memo;
    vector<int> l1c(l1);
    sort(l1c.begin(), l1c.end());
    sort(l2.begin(), l2.end());
    for (int i = 0; i < n; i++) {
      memo[l1c[i]] = l2[i];
    }
    for (int i = 0; i < n; i++) {
      cout << memo[l1[i]] << "\n";
    }
    cout << "\n";
  }
  return 0;
}
