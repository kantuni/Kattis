#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<pair<int, int> > coords;
  for (int i = 0; i < 3; i++) {
    int x, y;
    cin >> x >> y;
    coords.push_back(make_pair(x, y));
  }
  
  // (x1, y1), (x1, y2), (x2, y1), (x2, y2)
  // where x1 ≥ x2, y1 ≥ y2
  sort(coords.begin(), coords.end());
  
  int dx, dy;
  pair<int, int> ans;
  if (coords[0].first == coords[1].first) {
    dx = coords[2].first - coords[0].first;
    dy = coords[1].second - coords[0].second;
    
    if (coords[2].second == coords[0].second) {
      ans = make_pair(coords[0].first + dx, coords[0].second + dy);
    } else {
      ans = make_pair(coords[0].first + dx, coords[0].second);
    }
  } else {
    dx = coords[2].first - coords[0].first;
    dy = coords[2].second - coords[1].second;
    
    if (coords[2].second == coords[0].second) {
      ans = make_pair(coords[2].first - dx, coords[2].second - dy);
    } else {
      ans = make_pair(coords[2].first - dx, coords[2].second);
    }
  }
  cout << ans.first << " " << ans.second << "\n";
  return 0;
}
