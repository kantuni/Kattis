#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, vector<int>> memo;
  int n;
  cin >> n;
  while (n--) {
    string s;
    int y;
    cin >> s >> y;
    memo[s].push_back(y);
  }
  unordered_set<string> visited;
  int q;
  cin >> q;
  while (q--) {
    string s;
    int k;
    cin >> s >> k;
    if (!visited.count(s)) {
      sort(memo[s].begin(), memo[s].end());
    }
    cout << memo[s][k - 1] << "\n";
  }
  return 0;
}
