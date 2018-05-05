#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int t = 1; t < T + 1; t++) {
    int r, c;
    cin >> r >> c;
    vector<vector<char>> M(r, vector<char>(c));
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cin >> M[i][j];
      }
    }
    cout << "Test " << t << "\n";
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cout << M[r - 1 - i][c - 1 - j];
      }
      cout << "\n";
    }
  }
  return 0;
}
