#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-10

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    // maximize 4h^3 - 2h^2(x+y) + hxy
    // i.e. solve 12h^2 - 4hx - 4hy + xy = 0
    double h1, h2;
    h1 = (4 * (x + y) - sqrt(16 * (x + y) * (x + y)  - 48 * x * y)) / 24;
    h2 = (4 * (x + y) + sqrt(16 * (x + y) * (x + y)  - 48 * x * y)) / 24;
    double v1, v2;
    v1 = (x - 2 * h1) * (y - 2 * h1) * h1;
    v2 = (x - 2 * h2) * (y - 2 * h2) * h2;
    printf("%.7f\n", max(v1, v2));
  }
  return 0;
}
