#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, multiset<int>> memo;
  int n;
  cin >> n;
  while (n--) {
    string s;
    int y;
    cin >> s >> y;
    memo[s].insert(y);
  }
  int q;
  cin >> q;
  while (q--) {
    string s;
    int k;
    cin >> s >> k;
    auto it = next(memo[s].begin(), k - 1);
    cout << *it << "\n";
  }
  return 0;
}
