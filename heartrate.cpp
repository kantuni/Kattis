#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int b; double p;
    cin >> b >> p;
    double bpm = 60 * b / p;
    double diff = 60 / p;
    printf("%.4f %.4f %.4f\n", bpm - diff, bpm, bpm + diff);
  }
  return 0;
}
