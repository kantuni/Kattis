#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<string> memo;
  while (n--) {
    string u, t;
    cin >> u >> t;
    if (!memo.count(u) and memo.size() < 12) {
      memo.insert(u);
      cout << u << " " << t << endl;
    }
  }
  return 0;
}
