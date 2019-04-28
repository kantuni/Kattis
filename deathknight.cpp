#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  while (n--) {
    string s;
    cin >> s;
    bool won = true;
    for (int i = 0; i < s.size() - 1; i++) {
      if (s[i] == 'C' and s[i + 1] == 'D') {
        won = false;
        break;
      }
    }
    if (won) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
