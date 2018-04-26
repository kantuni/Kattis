#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    string a, b;
    cin >> a >> b;
    cout << a << "\n";
    cout << b << "\n";
    for (int i = 0; i < a.size(); i++) {
      if (a[i] == b[i]) {
        cout << ".";
      } else {
        cout << "*";
      }
    }
    cout << "\n\n";
  }
  return 0;
}
