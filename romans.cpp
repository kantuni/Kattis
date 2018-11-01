#include <bits/stdc++.h>
using namespace std;

int main() {
  float x;
  cin >> x;
  int ans = x * (5280. / 4854.) * 1000. + 0.5;
  cout << ans << "\n";
  return 0;
}
