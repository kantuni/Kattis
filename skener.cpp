#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c, zr, zc;
  cin >> r >> c >> zr >> zc;
  vector<vector<char>> A(r, vector<char>(c));
  vector<vector<char>> M(r * zr, vector<char>(c * zc));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < r * zr; i++) {
    for (int j = 0; j < c * zc; j++) {
      M[i][j] = A[i / zr][j / zc];
      cout << M[i][j];
    }
    cout << endl;
  }
  return 0;
}
