#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int b;
    double p;
    cin >> b >> p;
    double bpm = 60 * b / p;
    double diff = 60 / p;
    cout << fixed << setprecision(4);
    cout << bpm - diff << " " << bpm << " " << bpm + diff << "\n";
  }
  return 0;
}
