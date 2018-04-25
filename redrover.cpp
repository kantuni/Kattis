#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  unordered_set<string> memo;
  int ans = s.size();
  for (int len = 2; len < s.size(); len++) {
    for (int i = 0; i < s.size() - len; i++) {
      string sc = s;
      string m = sc.substr(i, len);
      if (memo.count(m)) {
        continue;
      } else {
        memo.insert(m);
      }
      while (true) {
        int pos = sc.find(m);
        if (pos == string::npos or pos + len > sc.size()) {
          break;
        }
        sc.replace(pos, len, "M");
      }
      int newlen = sc.size() + m.size();
      ans = min(ans, newlen);
    }
  }
  cout << ans << "\n";
  return 0;
}
