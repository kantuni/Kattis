#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  string ans;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] != '<') {
      ans.push_back(s[i]);
    } else {
      ans.pop_back();
    }
  }
  cout << ans << endl;
  return 0;
}
