#include <bits/stdc++.h>
using namespace std;

int main() {
  double r;
  int m, c;
  while (cin >> r >> m >> c) {
    if (r == 0 and m == 0 and c == 0) break;
    double carea = acos(-1.0) * r * r;
    double sarea = 4 * r * r;
    printf("%.7f %.7f\n", carea, sarea * c / m);
  }
  return 0;
}
