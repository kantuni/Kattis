#include <bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;

int main() {
  double a, b, s, m, n;
  while (true) {
    cin >> a >> b >> s >> m >> n;
    if (a + b + s + m + n == 0) {
      break;
    }
    double A, v, x, y;
    double low = 0, high = 90;
    while (abs(high - low) > 1e-8) {
      A = (low + high) / 2;
      x = b / (2 * sin(A * PI / 180));
      y = a / (2 * cos(A * PI / 180));
      if (x * n > y * m) {
        low = A;
      } else {
        high = A;
      }
    }
    v = (x * n + y * m) / s;
    cout << fixed << setprecision(2);
    cout << A << " " << v << "\n";
  }
  return 0;
}
