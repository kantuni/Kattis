#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  vector<int> a(n), asub(n - 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (i != 0) {
      asub[i - 1] = a[i];
    }
  }

  vector<int> gis;
  gis.push_back(a[0]);

  for (int i = 0; i < n - 1; i++) {
    if (asub[i] > gis[gis.size() - 1]) {
      gis.push_back(asub[i]);
    }
  }

  cout << gis.size() << "\n";
  for (int g: gis) {
    cout << g << " ";
  }
  cout << "\n";
  return 0;
}
