#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, t;
  cin >> p >> t;
  cin.ignore();
  int ans = 0;
  for (int i = 0; i < p; i++) {
    bool ok = true;
    for (int j = 0; j < t; j++) {
      string line;
      getline(cin, line);
      if (!ok) {
        continue;
      } else {
        string copy = line;
        for (int k = 1; k < copy.size(); k++) {
          copy[k] = tolower(copy[k]);
        }
        if (copy != line) {
          ok = false;
        }
      }
    }
    if (ok) {
      ans++;
    }
  }
  cout << ans << "\n";
  return 0;
}
