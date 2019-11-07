#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c, zr, zc;
  cin >> r >> c >> zr >> zc;
  char A[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < r * zr; i++) {
    for (int j = 0; j < c * zc; j++) {
      cout << A[i / zr][j / zc];
    }
    cout << endl;
  }
  return 0;
}
