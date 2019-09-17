#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, x1, y1, x2, y2;
  cin >> x >> y >> x1 >> y1 >> x2 >> y2;
  float d = 0;
  if (x > x1 and x < x2 and y > y2) {
    d = y - y2;
  } else if (x > x2 and y > y2) {
    d = hypot(x - x2, y - y2);
  } else if (x > x2 and y > y1 and y < y2) {
    d = x - x2;
  } else if (x > x2 and y < y1) {
    d = hypot(x - x2, y1 - y);
  } else if (x > x1 and x < x2 and y < y1) {
    d = y1 - y;
  } else if (x < x1 and y < y1) {
    d = hypot(x1 - x, y1 - y);
  } else if (x < x1 and y > y1 and y < y2) {
    d = x1 - x;
  } else if (x < x1 and y > y2) {
    d = hypot(x1 - x, y - y2);
  }
  cout << d << endl;
  return 0;
}
