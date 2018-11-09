#include <bits/stdc++.h>
using namespace std;

int main() {
  int g, s, c;
  cin >> g >> s >> c;
  int total = g * 3 + s * 2 + c;
  string v, t;
  if (total > 7) {
    v = "Province";
  } else if (total > 4) {
    v = "Duchy";
  } else if (total > 1) {
    v = "Estate";
  }
  if (total > 5) {
    t = "Gold";
  } else if (total > 2) {
    t = "Silver";
  } else {
    t = "Copper";
  }
  if (v != "") {
    cout << v << " or ";
  }
  cout << t << "\n";
  return 0;
}
