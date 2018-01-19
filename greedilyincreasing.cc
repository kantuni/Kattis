#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  map<int, int> a1;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i != 0) {
      a1[i - 1] = a[i];
    }
  }

  vector<int> gis;
  gis.push_back(a[0]);

  int curr = 0;
  for (auto kv: a1) {
    if (kv.first >= curr && kv.second > gis[gis.size() - 1]) {
      gis.push_back(kv.second);
    }
  }

  cout << gis.size() << "\n";
  for (int g: gis) {
    cout << g << " ";
  }
  cout << "\n";
  return 0;
}