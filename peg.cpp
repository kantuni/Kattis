#include <bits/stdc++.h>
using namespace std;

int main() {
  char M[7][7];
  for (int r = 0; r < 7; r++) {
    string line;
    getline(cin, line);
    for (int c = 0; c < 7; c++) {
      M[r][c] = line[c];
    }
  }
  // up, down, left, right
  int dr[4] = {-1, 1, 0, 0};
  int dc[4] = {0, 0, -1, 1};
  int ans = 0;
  for (int r = 0; r < 7; r++) {
    for (int c = 0; c < 7; c++) {
      if (M[r][c] != 'o') {
        continue;
      }
      for (int i = 0; i < 4; i++) {
        bool rok = r + 2 * dr[i] >= 0 and r + 2 * dr[i] < 7;
        bool cok = c + 2 * dc[i] >= 0 and c + 2 * dc[i] < 7;
        if (!rok || !cok) {
          continue;
        }
        bool piece = M[r + dr[i]][c + dc[i]] == 'o';
        bool empty = M[r + 2 * dr[i]][c + 2 * dc[i]] == '.';
        if (!piece || !empty) {
          continue;
        }
        ans++;
      }
    }
  }
  cout << ans << "\n";
  return 0;
}
