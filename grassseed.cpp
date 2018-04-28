#include <bits/stdc++.h>
using namespace std;

int main() {
  double c;
  int n;
  cin >> c >> n;
  double ans = 0;
  while (n--) {
    double l, w;
    cin >> l >> w;
    ans += l * w;
  }
  cout << fixed << setprecision(7);
  cout << ans * c << "\n";
  return 0;
}
