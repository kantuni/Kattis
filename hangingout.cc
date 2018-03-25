#include <bits/stdc++.h>
using namespace std;

int main() {
  int l, x;
  cin >> l >> x;
  int curr = 0, ans = 0;
  while (x--) {
    string s;
    int p;
    cin >> s >> p;
    if (s == "enter") {
      if (curr + p <= l) curr += p;
      else ans++;
    }
    else curr -= p;
  }
  cout << ans << "\n";
  return 0;
}
