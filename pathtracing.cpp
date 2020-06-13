#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<pair<int, int>> moves;
  string move;
  while (getline(cin, move)) {
    if (move == "left") {
      moves.push_back(make_pair(0, -1));
    } else if (move == "up") {
      moves.push_back(make_pair(-1, 0));
    } else if (move == "right") {
      moves.push_back(make_pair(0, 1));
    } else if (move == "down") {
      moves.push_back(make_pair(1, 0));
    }
  }
  int n = 1024;
  int x, xmin, xmax;
  int y, ymin, ymax;
  x = xmin = xmax = n / 2;
  y = ymin = ymax = n / 2;
  vector<vector<char>> M(n, vector<char>(n, ' '));
  for (int i = 0; i < moves.size(); i++) {
    x += moves[i].first;
    y += moves[i].second;
    M[x][y] = '*';
    xmin = min(xmin, x);
    ymin = min(ymin, y);
    xmax = max(xmax, x);
    ymax = max(ymax, y);
  }
  M[n / 2][n / 2] = 'S';
  M[x][y] = 'E';
  xmin--;
  ymin--;
  xmax++;
  ymax++;
  for (int i = xmin; i <= xmax; i++) {
    M[i][ymin] = '#';
    M[i][ymax] = '#';
  }
  for (int j = ymin; j <= ymax; j++) {
    M[xmin][j] = '#';
    M[xmax][j] = '#';
  }
  for (int i = xmin; i <= xmax; i++) {
    for (int j = ymin; j <= ymax; j++) {
      cout << M[i][j];
    }
    cout << endl;
  }
  return 0;
}
