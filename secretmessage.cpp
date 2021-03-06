#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    string s;
    cin >> s;
    int m = s.size();
    while (true) {
      int root = sqrt(m);
      if (root * root == m) {
        break;
      }
      s += "*";
      m++;
    }
    int r = sqrt(m), c = sqrt(m);
    char table[r][c];
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        table[i][j] = s[i * r + j];
      }
    }
    string sm;
    for (int j = 0; j < c; j++) {
      for (int i = r - 1; i >= 0; i--) {
        if (table[i][j] != '*') {
          sm += table[i][j];
        }
      }
    }
    cout << sm << endl;
  }
  return 0;
}
