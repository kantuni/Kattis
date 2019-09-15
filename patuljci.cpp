#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> d(9);
  int sum = 0;
  for (int i = 0; i < 9; i++) {
    cin >> d[i];
    sum += d[i];
  }
  for (int i = 0; i < 8; i++) {
    for (int j = i + 1; j < 9; j++) {
      if (d[i] + d[j] == sum - 100) {
        d[i] = 0;
        d[j] = 0;
      }
    }
  }
  for (int i = 0; i < 9; i++) {
    if (d[i] != 0) {
      cout << d[i] << endl;
    }
  }
  return 0;
}
