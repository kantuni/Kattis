#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  vector<vector<char> > M(r, vector<char>(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) cin >> M[i][j];
  }
  int dr[4] = {0, 0, 1, 1};
  int dc[4] = {0, 1, 0, 1};
  vector<int> counts(5);
  for (int i = 0; i < r - 1; i++) {
    for (int j = 0; j < c - 1; j++) {
      int count = 0;
      for (int k = 0; k < 4; k++) {
        if (M[i + dr[k]][j + dc[k]] == '#') {
          count = -1;
          break;
        }
        if (M[i + dr[k]][j + dc[k]] == 'X') count++;
      }
      if (count != -1) counts[count]++;
    }
  }
  for (auto c: counts) cout << c << "\n";
  return 0;
}
