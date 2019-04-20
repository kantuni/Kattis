// WA
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> ranges;
  vector<int> color(2 * n);
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    for (int j = l - 1; j < r; j++) {
      color[j]++;
    }
    ranges.push_back({l - 1, r - 1});
  }
  set<int> rooms;
  for (auto range: ranges) {
    int l = range.first, r = range.second;
    bool found = false;
    for (int i = l; i < r + 1; i++) {
      if (rooms.count(i)) {
        found = true;
        break;
      }
    }
    if (!found) {
      int mcolor = -1, mindex = -1;
      for (int i = l; i < r + 1; i++) {
        if (color[i] > mcolor) {
          mcolor = color[i];
          mindex = i;
        }
      }
      rooms.insert(mindex);
    }
  }
  cout << rooms.size() << endl;
  return 0;
}
