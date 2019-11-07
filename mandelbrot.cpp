#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 1;
  string line;
  while (getline(cin, line)) {
    istringstream iss(line);
    pair<double, double> c;
    int r;
    iss >> c.first >> c.second >> r;
    pair<double, double> z = {0.0, 0.0};
    bool in = true;
    while (r--) {
      z = make_pair(
        z.first * z.first - z.second * z.second + c.first,
        2.0 * z.first * z.second + c.second
      );
      if (z.first * z.first + z.second * z.second > 4.0) {
        in = false;
        break;
      }
    }
    cout << "Case " << t++ << ": ";
    cout << (in ? "IN" : "OUT") << endl;
  }
  return 0;
}
