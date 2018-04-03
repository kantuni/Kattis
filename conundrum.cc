#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 0;
  for (int i = 0; i < s.size() - 2; i += 3) {
    if (s[i] != 'P') {
      ans++;
    }
    if (s[i + 1] != 'E') {
      ans++;
    }
    if (s[i + 2] != 'R') {
      ans++;
    }
  }
  cout << ans << "\n";
  return 0;
}
