#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int num = 0, denom = 0;
  for (int i = 0; i < n; i++) {
    int m, s;
    cin >> m >> s;
    num += s;
    denom += m * 60;
  }
  double ans = 1. * num / denom;
  if (ans > 1) {
    cout << fixed << setprecision(8);
    cout << ans << "\n";
  } else {
    cout << "measurement error" << "\n";
  }
  return 0;
}
