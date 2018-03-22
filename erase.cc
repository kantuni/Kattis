#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string before, after;
  cin >> before >> after;
  if (n % 2 == 1) {
    for (char &bit: after) bit = (bit == '0') ? '1' : '0';
  }
  bool failed = false;
  for (int i = 0; i < before.size(); i++) {
    if (before[i] != after[i]) {
      failed = true;
      break;
    }
  }
  if (failed) cout << "Deletion failed\n";
  else cout << "Deletion succeeded\n";
  return 0;
}
