#include <bits/stdc++.h>
using namespace std;

int main() {
  while (1) {
    int w, l;
    cin >> w >> l;
    if (w == 0 and l == 0) break;
    int n;
    cin >> n;
    int rx = 0, ry = 0, ax = 0, ay = 0;
    while (n--) {
      char d;
      int m;
      cin >> d >> m;
      if (d == 'u') {
        ry += m;
        ay = (ay + m > l - 1) ? l - 1 : ay + m;
      } else if (d == 'd') {
        ry -= m;
        ay = (ay - m < 0) ? 0 : ay - m;
      } else if (d == 'l') {
        rx -= m;
        ax = (ax - m < 0) ? 0 : ax - m;
      } else if (d == 'r') {
        rx += m;
        ax = (ax + m > w - 1) ? w - 1 : ax + m;
      }
    }
    cout << "Robot thinks " << rx << " " << ry << "\n";
    cout << "Actually at " << ax << " " << ay << "\n\n";
  }
  return 0;
}
