#include <bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<vc> vvc;

int main() {
  int r, c, zr, zc;
  cin >> r >> c >> zr >> zc;
  
  vvc A(r, vc(c)), M(r * zr, vc(c * zc));
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
    cout << "\n";
  }
  
  return 0;
}
