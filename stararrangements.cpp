#include <bits/stdc++.h>
using namespace std;

int main() {
  int s;
  cin >> s;
  cout << s << ":\n";
  for (int k = 1; k < s - 1; k++) {
    int total = 0;
    if (s % k == 0 and k != 1) {
      cout << k << "," << k << "\n";
    }
    for (int i = 0; total < s; i++) {
      if (i % 2 == 0) {
        total += k + 1;
      } else {
        total += k;
      }
    }
    if (total == s) {
      cout << (k + 1) << "," << k << "\n";
    }
  }
  return 0;
}
