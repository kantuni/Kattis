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
    if (n < 5) {
      cout << f(n) % 10 << endl;
    } else {
      cout << 0 << endl;
    }
  }
  return 0;
}
