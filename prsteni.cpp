#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main() {
  int n;
  cin >> n;
  vector<int> r(n);
  for (int i = 0; i < n; i++) {
    cin >> r[i];
  }
  for (int i = 1; i < n; i++) {
    int d = gcd(r[0], r[i]);
    cout << r[0] / d << "/" << r[i] / d << "\n";
  }
  return 0;
}
