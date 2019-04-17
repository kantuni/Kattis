#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  string a, b;
  cin >> a >> b;
  a = string(m - n, ' ') + a;
  string k(m, ' ');
  for (int i = m - 1; i > n - 1; i--) {
    a[i - n] = 'a' + (26 + b[i] - a[i]) % 26;
  }
  cout << a << endl;
  return 0;
}
