#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;
  while (p--) {
    int k, n;
    cin >> k >> n;
    int ans = n * (n + 3) / 2;
    cout << k << " " << ans << endl;
  }
  return 0;
}
