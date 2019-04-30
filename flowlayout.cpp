#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int m;
    cin >> m;
    if (m == 0) {
      break;
    }
    int cw = 0, ch = 0;
    int mw = 0, ph = 0;
    while (true) {
      int w, h;
      cin >> w >> h;
      if (w == -1 and h == -1) {
        cout << mw << " x " << ph + ch << endl;
        cw = 0, ch = 0;
        mw = 0, ph = 0;
        break;
      }
      if (cw + w <= m) {
        cw += w;
        ch = max(ch, h);
      } else {
        ph += ch;
        cw = w, ch = h;
      }
      mw = max(mw, cw);
    }
  }
  return 0;
}
