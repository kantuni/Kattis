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
    vector<int> l1s(l1), l2s(l2);
    sort(l1s.begin(), l1s.end());
    sort(l2s.begin(), l2s.end());
    map<int, int> memo;
    for (int i = 0; i < n; i++) {
      memo[l1s[i]] = l2s[i];
    }
    for (int i = 0; i < n; i++) {
      cout << memo[l1[i]] << endl;
    }
    cout << endl;
  }
  return 0;
}
