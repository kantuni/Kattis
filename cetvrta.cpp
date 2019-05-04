#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<pair<int, int>> coords;
  for (int i = 0; i < 3; i++) {
    int x, y;
    cin >> x >> y;
    coords.push_back({x, y});
  }
  // (x1, y1), (x1, y2), (x2, y1), (x2, y2)
  // where x1 ≥ x2, y1 ≥ y2
  sort(coords.begin(), coords.end());
  auto [x0, y0] = coords[0];
  auto [x1, y1] = coords[1];
  auto [x2, y2] = coords[2];
  pair<int, int> ans;
  if (x0 == x1) {
    int dx = x2 - x0;
    int dy = y1 - y0;
    if (y2 == y0) {
      ans = make_pair(x0 + dx, y0 + dy);
    } else {
      ans = make_pair(x0 + dx, y0);
    }
  } else {
    int dx = x2 - x0;
    int dy = y2 - y1;
    if (y2 == y0) {
      ans = make_pair(x2 - dx, y2 - dy);
    } else {
      ans = make_pair(x2 - dx, y2);
    }
  }
  cout << ans.first << " " << ans.second << endl;
  return 0;
}
