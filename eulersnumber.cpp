#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long double e = 1, f = 1;
  for (int i = 1; i < n + 1; i++) {
    f *= i;
    e += 1.0 / f;
  }
  cout << fixed << setprecision(15);
  cout << e << endl;
  return 0;
}
