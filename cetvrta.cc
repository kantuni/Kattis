#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<ii> vii;

int main() {
  vii coords;
  for (int i = 0; i < 3; i++) {
    int x, y;
    cin >> x >> y;
    coords.push_back(ii(x, y));
  }
  
  // (x1, y1), (x1, y2), (x2, y1), (x2, y2)
  // where x1 ≥ x2, y1 ≥ y2
  sort(coords.begin(), coords.end());
  
  int dx, dy;
  ii ans;
  
  if (coords[0].first == coords[1].first) {
    dx = coords[2].first - coords[0].first;
    dy = coords[1].second - coords[0].second;
    
    if (coords[2].second == coords[0].second) {
      ans = ii(coords[0].first + dx, coords[0].second + dy);
    } else {
      ans = ii(coords[0].first + dx, coords[0].second);
    }
  } else {
    dx = coords[2].first - coords[0].first;
    dy = coords[2].second - coords[1].second;
    
    if (coords[2].second == coords[0].second) {
      ans = ii(coords[2].first - dx, coords[2].second - dy);
    } else {
      ans = ii(coords[2].first - dx, coords[2].second);
    }
  }
  
  cout << ans.first << " " << ans.second << "\n";
  return 0;
}
