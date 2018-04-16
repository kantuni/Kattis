#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while (n--) {
    string s;
    getline(cin, s);
    unordered_map<char, int> alphabet;
    for (int i = 0; i < 26; i++) {
      alphabet['A' + i] = i + 1;
    }
    alphabet[' '] = 27;
    alphabet['\''] = 28;
    int prev = alphabet[s[0]];
    double ans = 1.0;
    for (int i = 1; i < s.size(); i++) {
      int next = alphabet[s[i]];
      int diff = min(abs(next - prev), 28 - max(prev, next) + min(prev, next));
      ans += (diff * acos(-1.0) * 60.0 / 28.0) / 15.0 + 1;
      prev = alphabet[s[i]];
    }
    cout << fixed << setprecision(7);
    cout << ans << "\n";
  }
  return 0;
}
