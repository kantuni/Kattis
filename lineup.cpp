#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> names(n);
  for (int i = 0; i < n; i++) {
    cin >> names[i];
  }
  vector<string> inc(names), dec(names);
  sort(inc.begin(), inc.end());
  sort(dec.rbegin(), dec.rend());
  if (names == inc) {
    cout << "INCREASING" << endl;
  } else if (names == dec) {
    cout << "DECREASING" << endl;
  } else {
    cout << "NEITHER" << endl;
  }
  return 0;
}
