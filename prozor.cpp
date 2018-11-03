#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, s, k;
  cin >> r >> s >> k;
  char w[r][s];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < s; j++) {
      cin >> w[i][j];
    }
  }
  int rx = 0, ry = 0;
  int mf = 0;
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < s; j++) {
      if (i + k - 1 < r and j + k - 1 < s) {
        int f = 0;
        for (int x = i + 1; x < i + k - 1; x++) {
          for (int y = j + 1; y < j + k - 1; y++) {
            if (w[x][y] == '*') {
              f++;
            }
          }
        }
        if (f > mf) {
          rx = i;
          ry = j;
          mf = f;
        }
      }
    }
  }
  for (int i = rx; i < rx + k; i++) {
    for (int j = ry; j < ry + k; j++) {
      bool tl = i == rx and j == ry;
      bool tr = i == rx and j == ry + k - 1;
      bool bl = i == rx + k - 1 and j == ry;
      bool br = i == rx + k - 1 and j == ry + k - 1;
      if (tl or tr or bl or br) {
        w[i][j] = '+';
      } else if (i == rx or i == rx + k - 1) {
        w[i][j] = '-';
      } else if (j == ry or j == ry + k - 1) {
        w[i][j] = '|';
      }
    }
  }
  cout << mf << "\n";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < s; j++) {
      cout << w[i][j];
    }
    cout << "\n";
  }
  return 0;
}
