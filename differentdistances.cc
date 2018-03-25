#include <bits/stdc++.h>
using namespace std;

int main() {
  long double x1, y1, x2, y2, p, ans;
  while (true) {
    cin >> x1;
    if (x1 == 0) break;
    cin >> y1 >> x2 >> y2 >> p;
    ans = pow(abs(x1 - x2), p) + pow(abs(y1 - y2), p);
    ans = pow(ans, 1.0 / p);
    printf("%.10Lf\n", ans);
  }
  return 0;
}
