#include <bits/stdc++.h>
using namespace std;

// globals
vector<pair<double, double>> points;

double dist(int i, int j) {
  return hypot(
    points[i].first - points[j].first, 
    points[i].second - points[j].second
  );
}

int main() {
  int n;
  cin >> n;
  points.resize(n);
  for (int i = 0; i < n; i++) {
    double x, y;
    cin >> x >> y;
    points[i] = make_pair(x, y);
  }
  vector<int> tour(n);
  vector<bool> used(n, false);
  tour[0] = 0;
  used[0] = true;
  for (int i = 1; i < n; i++) {
    int best = -1;
    for (int j = 0; j < n; j++) {
      bool c1 = !used[j];
      bool c2 = best == -1 or dist(tour[i - 1], j) < dist(tour[i - 1], best);
      if (c1 and c2) {
        best = j;
      }
    }
    tour[i] = best;
    used[best] = true;
  }
  for (int i = 0; i < n; i++) {
    cout << tour[i] << endl;
  }
  return 0;
}
