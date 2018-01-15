#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<vc> vvc;

int main() {
  int r, c;
  cin >> r >> c;
  
  vvc map(r, vc(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> map[i][j];
    }
  }
  
  vi dr = {0, 0, 1, 1};
  vi dc = {0, 1, 0, 1};
  vi counts(5);
  
  for (int i = 0; i < r - 1; i++) {
    for (int j = 0; j < c - 1; j++) {
      int count = 0;
      for (int k = 0; k < 4; k++) {
        if (map[i + dr[k]][j + dc[k]] == '#') {
          count = -1;
          break;
        }
        if (map[i + dr[k]][j + dc[k]] == 'X') {
          count++;
        }
      }
      if (count != -1) {
        counts[count]++;
      }
    }
  }
  
  for (auto c: counts) {
    cout << c << "\n";
  }
  
  return 0;
}
