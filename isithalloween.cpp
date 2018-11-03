#include <bits/stdc++.h>
using namespace std;

int main() {
  string m;
  int d;
  cin >> m >> d;
  bool c1 = (m == "OCT" and d == 31);
  bool c2 = (m == "DEC" and d == 25);
  if (c1 or c2) {
    cout << "yup" << "\n";
  } else {
    cout << "nope" << "\n";
  }
  return 0;
}
