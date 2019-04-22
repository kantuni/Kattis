#include <bits/stdc++.h>
using namespace std;

int f(int n) {
  return n > 0 ? n * f(n - 1) : 1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = (n < 5) ? f(n) % 10 : 0;
    cout << ans << endl;
  }
  return 0;
}
