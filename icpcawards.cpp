#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  unordered_set<string> memo;
  string u, t;
  while (n--) {
    cin >> u >> t;
    if (!memo.count(u) and memo.size() < 12) {
      memo.insert(u);
      cout << u << " " << t << "\n";
    }
  }
  return 0;
}
