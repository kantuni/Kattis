#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-9
#define PI 3.14159265359
#define g 9.81

int main() {
  int n;
  cin >> n;
  while (n--) {
    long double v0, theta, x1, h1, h2, t, y;
    cin >> v0 >> theta >> x1 >> h1 >> h2;
    
    t = x1 / (v0 * cos(theta * PI / 180));
    y = x1 * tan(theta * PI / 180) - 0.5 * g * t * t;
    
    if (y - h1 - 1 > EPS && h2 - y - 1 > EPS) {
      cout << "Safe\n";
    } else {
      cout << "Not Safe\n";
    }
  }
  return 0;
}
