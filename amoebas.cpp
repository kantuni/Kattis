#include <bits/stdc++.h>
using namespace std;

int m, n;
int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};
vector<vector<char>> g;
vector<vector<int>> color;

void dfs(int x, int y) {
  color[x][y] = 1;
  for (int i = 0; i < 8; i++) {
    int nx = x + dr[i];
    int ny = y + dc[i];
    bool ok = (nx >= 0 and nx < m) and (ny >= 0 and ny < n);
    bool black = ok and g[nx][ny] == '#';
    bool available = ok and color[nx][ny] == 0;
    if (black and available) {
      dfs(nx, ny);
    }
  }
}

int main() {
  cin >> m >> n;
  g.resize(m, vector<char>(n));
  color.resize(m, vector<int>(n));
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> g[i][j];
    }
  }
  int ans = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (color[i][j] == 0 and g[i][j] == '#') {
        dfs(i, j);
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
