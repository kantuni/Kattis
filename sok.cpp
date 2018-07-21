#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int i, j, k;
  cin >> i >> j >> k;
  double c1 = 1.0 * a / i;
  double c2 = 1.0 * b / j;
  double c3 = 1.0 * c / k;
  double q = min({c1, c2, c3});
  cout << fixed << setprecision(6);
  cout << a - q * i << " ";
  cout << b - q * j << " ";
  cout << c - q * k << "\n";
  return 0;
}
