#include <bits/stdc++.h>
#define PI acos(-1.0)
#define G 9.81
#define EPS 1e-10
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    double v, theta, x1, h1, h2, t, y;
    cin >> v >> theta >> x1 >> h1 >> h2;
    t = x1 / (v * cos(theta * PI / 180.0));
    y = x1 * tan(theta * PI / 180.0) - 0.5 * G * t * t;
    if (y - h1 - 1 > EPS and h2 - y - 1 > EPS) {
      cout << "Safe" << endl;
    } else {
      cout << "Not Safe" << endl;
    }
  }
  return 0;
}
