#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<int, int>> votes(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
      int v;
      cin >> v;
      votes[i] = make_pair(v, i + 1);
      sum += v;
    }
    sort(votes.rbegin(), votes.rend());
    pair<int, int> v1 = votes[0], v2 = votes[1];
    if (v1.first == v2.first) {
      cout << "no winner" << "\n";
    } else {
      cout << (v1.first * 2 > sum ? "majority" : "minority");
      cout << " winner " << v1.second << "\n";
    }
  }
  return 0;
}
