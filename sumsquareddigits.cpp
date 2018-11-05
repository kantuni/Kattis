#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;
  while (p--) {
    int k, b, n;
    cin >> k >> b >> n;
    int ssd = 0;
    while (n > 0) {
      ssd += (n % b) * (n % b);
      n /= b;
    }
    cout << k << " " << ssd << "\n";
  }
  return 0;
}
