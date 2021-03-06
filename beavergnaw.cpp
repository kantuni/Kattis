#include <bits/stdc++.h>
using namespace std;

int main() {
  const double PI = acos(-1.0);
  const double EPS = 1e-9;
  while (true) {
    int D, V;
    cin >> D >> V;
    if (D == 0 and V == 0) {
      break;
    }
    double Vt;
    Vt = PI * D * D * D / 4.0;
    Vt -= V;
    double Vsm, Vc, Vl;
    double l = 0, h = D, d;
    while (true) {
      d = (l + h) / 2;
      Vsm = PI * d * d * d / 4.0;
      Vc = PI * (D - d) * (D * D + D * d + d * d) / 24.0;
      Vl = Vsm + 2 * Vc;
      if (abs(Vt - Vl) < EPS) {
        break;
      } else if (Vt - Vl > EPS) {
        l = d;
      } else {
        h = d;
      }
    }
    cout << fixed << setprecision(9);
    cout << d << endl;
  }
  return 0;
}
