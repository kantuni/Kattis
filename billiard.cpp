#include <bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;

int main() {
  int a, b, s, m, n;
  while (true) {
    cin >> a >> b >> s >> m >> n;
    if (a + b + s + m + n == 0) {
      break;
    }
    double x = a * m;
    double y = b * n;
    double A = atan(y / x) * 180 / PI;
    double v = hypot(x, y) / s;
    cout << fixed << setprecision(2);
    cout << A << " " << v << "\n";
  }
  return 0;
}
