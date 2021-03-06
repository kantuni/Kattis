#include <iostream>
using namespace std;

int main() {
  int a1, a2, a3, a4;
  int b1, b2, b3, b4;
  cin >> a1 >> b1 >> a2 >> b2;
  cin >> a3 >> b3 >> a4 >> b4;
  int gmin = a1 + a2;
  int gmax = b1 + b2;
  int emin = a3 + a4;
  int emax = b3 + b4;
  if (gmin > emax) {
    cout << "Gunnar" << endl;
  } else if (emin > gmax) {
    cout << "Emma" << endl;
  } else {
    int l = max(gmin, emin) - min(gmin, emin);
    int r = max(gmax, emax) - min(gmax, emax);
    if (r == l) {
      cout << "Tie" << endl;
    } else if (r > l) {
      cout << (max(gmax, emax) == gmax ? "Gunnar" : "Emma") << endl;
    } else {
      cout << (min(gmin, emin) == gmin ? "Emma" : "Gunnar") << endl;
    }
  }
  return 0;
}
