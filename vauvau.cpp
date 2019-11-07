#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int> h(3);
  cin >> h[0] >> h[1] >> h[2];
  for (int i = 0; i < 3; i++) {
    int l1 = 0, r1 = a;
    bool a1 = true;
    while (true) {
      if (l1 <= h[i] and h[i] <= r1) {
        break;
      }
      l1 = r1;
      r1 += a1 ? b : a;
      a1 = !a1;
    }
    int l2 = 0, r2 = c;
    bool a2 = true;
    while (true) {
      if (l2 <= h[i] and h[i] <= r2) {
        break;
      }
      l2 = r2;
      r2 += a2 ? d : c;
      a2 = !a2;
    }
    if (a1 and a2) {
      cout << "both" << endl;
    } else if (a1 or a2) {
      cout << "one" << endl;
    } else {
      cout << "none" << endl;
    }
  }
  return 0;
}
