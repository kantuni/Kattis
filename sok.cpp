// WA
#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, c, i, j, k;
  cin >> a >> b >> c >> i >> j >> k;
  double c1, c2, c3;
  if (a == b and b == c and i == j and j == k) {
    c1 = c2 = c3 = 0;
  } else {
    while (true) {
      if (a - i < 0 or b - j < 0 or c - k < 0) {
        break;
      }
      a -= i;
      b -= j;
      c -= k;
    }
    double minc = min({a, b, c});
    if (minc == 0) {
      c1 = a;
      c2 = b;
      c3 = c;
    } else if (minc == a) {
      c1 = 0;
      c2 = b - j / i;
      c3 = c - k / i;
    } else if (minc == b) {
      c1 = a - i / j;
      c2 = 0;
      c3 = c - k / j;
    } else {
      c1 = a - i / k;
      c2 = b - j / k;
      c3 = 0;
    }
  }
  cout << fixed << setprecision(6);
  cout << c1 << " " << c2 << " " << c3 << "\n";
  return 0;
}
