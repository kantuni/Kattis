#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<pair<long long, int>> a(n), d(n), h(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> d[i].first >> h[i].first;
    a[i].second = d[i].second = h[i].second = i;
  }
  sort(a.rbegin(), a.rend());
  sort(d.rbegin(), d.rend());
  sort(h.rbegin(), h.rend());
  set<int> team;
  for (int i = 0; i < k; i++) {
    team.insert(a[i].second);
    team.insert(d[i].second);
    team.insert(h[i].second);
  }
  cout << team.size() << endl;
  return 0;
}
