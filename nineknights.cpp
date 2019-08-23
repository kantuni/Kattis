#include <iostream>
using namespace std;

int main() {
  char B[5][5];
  int k = 0;
  for (int r = 0; r < 5; r++) {
    for (int c = 0; c < 5; c++) {
      cin >> B[r][c];
      if (B[r][c] == 'k') {
        k++;
      }
    }
  }
  char dr[8] = {-1, -2, -2, -1, 1, 2, 2, 1};
  char dc[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
  bool valid = k == 9;
  for (int r = 0; valid and r < 5; r++) {
    for (int c = 0; valid and c < 5; c++) {
      if (B[r][c] == 'k') {
        for (int i = 0; i < 8; i++) {
          bool rok = r + dr[i] >= 0 and r + dr[i] < 5;
          bool cok = c + dc[i] >= 0 and c + dc[i] < 5;
          if (rok and cok and B[r + dr[i]][c + dc[i]] == 'k') {
            valid = false;
            break;
          }
        }
      }
    }
  }
  if (valid) {
    cout << "valid" << endl;
  } else {
    cout << "invalid" << endl;
  }
  return 0;
}
