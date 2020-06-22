#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int t = 1; t < T + 1; t++) {
    int r, c;
    cin >> r >> c;
    char M[r][c];
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cin >> M[i][j];
      }
    }
    cout << "Test " << t << endl;
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cout << M[r - 1 - i][c - 1 - j];
      }
      cout << endl;
    }
  }
  return 0;
}
