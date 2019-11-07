#include <bits/stdc++.h>
using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  if (a.size() < b.size()) {
    while (a.size() != b.size()) {
      a = "0" + a;
    }
  } else if (a.size() > b.size()) {
    while (a.size() != b.size()) {
      b = "0" + b;
    }
  }
  string x, y;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] > b[i]) {
      x += string(1, a[i]);
    } else if (a[i] < b[i]) {
      y += string(1, b[i]);
    } else {
      x += string(1, a[i]);
      y += string(1, b[i]);
    }
  }
  if (x.size() == 0) {
    cout << "YODA" << endl;
  } else {
    cout << to_string(stoi(x)) << endl;
  }
  if (y.size() == 0) {
    cout << "YODA" << endl;
  } else {
    cout << to_string(stoi(y)) << endl;
  }
  return 0;
}
