#include <iostream>
using namespace std;

int main() {
  char B[5][5];
  int knights = 0;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> B[i][j];
      if (B[i][j] == 'k') knights++;
    }
  }
  char dr[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
  char dc[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
  bool valid = true;
  for (int r = 0; r < 5; r++) {
    for (int c = 0; c < 5; c++) {
      if (B[r][c] == 'k') {
        for (int i = 0; i < 8; i++) {
          bool ok = r + dr[i] >= 0 and r + dr[i] < 5;
          ok = ok and c + dc[i] >= 0 and c + dc[i] < 5;
          if (ok and B[r + dr[i]][c + dc[i]] == 'k') {
            valid = false;
            break;
          }
        }
      }
    }
  }
  if (valid and knights == 9) cout << "valid\n";
  else cout << "invalid\n";
  return 0;
}
