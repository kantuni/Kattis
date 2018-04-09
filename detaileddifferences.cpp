#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    string a, b;
    cin >> a >> b;
    cout << a << "\n" << b << "\n";
    for (int i = 0; i < a.size(); i++) {
      cout << (a[i] == b[i] ? "." : "*");
    }
    cout << "\n\n";
  }
  return 0;
}
