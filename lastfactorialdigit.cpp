#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
  return n > 0 ? n * factorial(n - 1) : 1;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int last = factorial(n) % 10;
    cout << last << "\n";
  }
  return 0;
}
