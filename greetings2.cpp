#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  string s;
  cin >> s;
  int ec = count(s.begin(), s.end(), 'e');
  string ans = "h" + string(2 * ec, 'e') + "y";
  cout << ans << endl;
  return 0;
}
