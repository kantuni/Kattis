#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string ans;
  cin >> ans;
  string a = "ABC";
  string b = "BABC";
  string g = "CCAABB";
  int ac = 0, bc = 0, gc = 0;
  for (int i = 0; i < n; i++) {
    if (ans[i] == a[i % 3]) {
      ac++;
    }
    if (ans[i] == b[i % 4]) {
      bc++;
    }
    if (ans[i] == g[i % 6]) {
      gc++;
    }
  }
  int m = max({ac, bc, gc});
  cout << m << "\n";
  if (ac == m) {
    cout << "Adrian" << "\n";
  }
  if (bc == m) {
    cout << "Bruno" << "\n";
  }
  if (gc == m) {
    cout << "Goran" << "\n";
  }
  return 0;
}
