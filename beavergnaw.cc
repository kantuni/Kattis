#include <bits/stdc++.h>
using namespace std;

int main() {
  double EPS = 1e-11;
  while (true) {
    int D, V;
    cin >> D >> V;
    if (D == 0 and V == 0) {
      break;
    }
    double Vt;
    Vt = acos(-1.0) * D * D * D / 4.0;
    Vt -= V;
    double Vsm, Vc, Vl;
    double d, l = 0, h = D;
    while (true) {
      d = (l + h) / 2;
      Vsm = acos(-1.0) * d * d * d / 4.0;
      Vc = acos(-1.0) * (D - d) * (D * D + D * d + d * d) / 24.0;
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
    cout << d << "\n";
  }
  return 0;
}
