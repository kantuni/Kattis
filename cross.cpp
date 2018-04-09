#include <bits/stdc++.h>
using namespace std;

// global
vector<vector<char>> grid(9, vector<char>(9));

bool no_duplicates_in_rows() {
  bool ok = true;
  for (int r = 0; r < 9; r++) {
    vector<int> row;
    for (int c = 0; c < 9; c++) {
      if (grid[r][c] != '.') {
        row.push_back(grid[r][c] - '0');
      }
    }
    unordered_set<int> nodup(row.begin(), row.end());
    if (row.size() != nodup.size()) {
      ok = false;
      break;
    }
  }
  return ok;
}


bool no_duplicates_in_columns() {
  bool ok = true;
  for (int c = 0; c < 9; c++) {
    vector<int> column;
    for (int r = 0; r < 9; r++) {
      if (grid[r][c] != '.') {
        column.push_back(grid[r][c] - '0');
      }
    }
    unordered_set<int> nodup(column.begin(), column.end());
    if (column.size() != nodup.size()) {
      ok = false;
      break;
    }
  }
  return ok;
}

bool no_duplicates_in_boxes() {
  bool ok = true;
  for (int r = 0; r < 9; r += 3) {
    for (int c = 0; c < 9; c += 3) {
      vector<int> box;
      for (int dr = 0; dr < 3; dr++) {
        for (int dc = 0; dc < 3; dc++) {
          char cell = grid[r + r % 3 + dr][c + c % 3 + dc];
          if (cell != '.') {
            box.push_back(cell - '0');
          }
        }
      }
      unordered_set<int> nodup(box.begin(), box.end());
      if (box.size() != nodup.size()) {
        ok = false;
        break;
      }
    }
  }
  return ok;
}

void cross(vector<vector<char>> &modified, int n) {
  for (int r = 0; r < 9; r++) {
    for (int c = 0; c < 9; c++) {
      if (modified[r][c] - '0' == n) {
        for (int i = 0; i < 9; i++) {
         modified[r][i] = 'x';
        }
        for (int i = 0; i < 9; i++) {
         modified[i][c] = 'x';
        } 
      }
    }
  }
}

int hatch(vector<vector<char>> &modified, int n) {
  for (int r = 0; r < 9; r += 3) {
    for (int c = 0; c < 9; c += 3) {
      int nr, nc;
      int cnt = 0;
      for (int dr = 0; dr < 3; dr++) {
        for (int dc = 0; dc < 3; dc++) {
          char cell = modified[r + r % 3 + dr][c + c % 3 + dc];
          if (cell == '.') {
            nr = r + r % 3 + dr;
            nc = c + c % 3 + dc;
            cnt++;
          }
        }
      }
      if (cnt == 0) {
        return -1;
      } else if (cnt == 1) {
        grid[nr][nc] = n + '0';
        return 1;
      }
    }
  }
  return 0;
}

bool solve() {
  bool more = true;
  while (more) {
    more = false;
    for (int n = 1; n < 10; n++) {
      auto modified(grid);
      cross(modified, n);
      int result = hatch(modified, n);
      more = (result == 1) ? true : more; 
      if (result == -1) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  for (int r = 0; r < 9; r++) {
    for (int c = 0; c < 9; c++) {
      cin >> grid[r][c];
    }
  }
  bool ok = no_duplicates_in_rows();
  ok &= no_duplicates_in_columns();
  ok &= no_duplicates_in_boxes();
  ok &= solve();
  if (!ok) {
    cout << "ERROR\n";
  } else {
    cout << "\n";
    for (int r = 0; r < 9; r++) {
      for (int c = 0; c < 9; c++) {
        cout << grid[r][c];
      }
      cout << "\n";
    }
  }
  return 0;
}
