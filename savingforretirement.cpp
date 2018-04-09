#include <bits/stdc++.h>
using namespace std;

int main() {
  int b, br, bs, a, as;
  cin >> b >> br >> bs >> a >> as;
  double x = ceil(1.0 * (br - b) * bs / as + a);
  bool ok = (x - a) * as > (br - b) * bs;
  if (!ok) {
    x++;
  }
  cout << x << "\n";
  return 0;
}
