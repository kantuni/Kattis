#include <bits/stdc++.h>
using namespace std;

int main() {
  const double EPS = 1e-10;
  const double PI = acos(-1.0);
  const double g = 9.81;
  int n;
  cin >> n;
  while (n--) {
    long double v0, theta, x1, h1, h2, t, y;
    cin >> v0 >> theta >> x1 >> h1 >> h2;
    t = x1 / (v0 * cos(theta * PI / 180.0));
    y = x1 * tan(theta * PI / 180.0) - 0.5 * g * t * t;
    if (y - h1 - 1 > EPS and h2 - y - 1 > EPS) {
      cout << "Safe\n";
    } else {
      cout << "Not Safe\n";
    }
  }
  return 0;
}
