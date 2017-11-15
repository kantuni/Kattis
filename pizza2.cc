#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  double ans = 100.0 * (r - c) * (r - c) / (r * r);
  printf("%.6f\n", ans);
  return 0;
}
