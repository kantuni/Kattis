#include <bits/stdc++.h>
using namespace std;

int one(string s) {
  int ans = 0;
  char curr = s[0];
  for (int i = 1; i < s.size(); i++) {
    if (curr == 'D') {
      ans++;
    } else if (curr == 'U' and s[i] == 'D') {
      ans += 2;
    }
    curr = 'U';
  }
  return ans;
}

int two(string s) {
  int ans = 0;
  char curr = s[0];
  for (int i = 1; i < s.size(); i++) {
    if (curr == 'U') {
      ans++;
    } else if (curr == 'D' and s[i] == 'U') {
      ans += 2;
    }
    curr = 'D';
  }
  return ans;
}

int three(string s) {
  int ans = 0;
  for (int i = 1; i < s.size(); i++) {
    if (s[i - 1] != s[i]) {
      ans++;
    }
  }
  return ans;
}

int main() {
  string s;
  cin >> s;
  cout << one(s) << "\n";
  cout << two(s) << "\n";
  cout << three(s) << "\n";
  return 0;
}
