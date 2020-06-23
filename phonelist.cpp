#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<string> numbers(n);
    for (int i = 0; i < n; i++) {
      cin >> numbers[i];
    }
    sort(numbers.begin(), numbers.end());
    bool ok = true;
    for (int i = 1; i < n; i++) {
      string prev = numbers[i - 1];
      string sub = numbers[i].substr(0, prev.size());
      if (sub == prev) {
        ok = false;
        break;
      }
    }
    if (ok) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
