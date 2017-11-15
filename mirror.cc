#include <bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<vc> vvc;

int main() {
  int T;
  cin >> T;
  
  for (int t = 0; t < T; t++) {
    int r, c;
    cin >> r >> c;
    
    vvc M(r, vc(c));
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cin >> M[i][j];
      }
    }
    
    cout << "Test " << t + 1 << "\n";
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        cout << M[r - 1 - i][c - 1 - j];
      }
      cout << "\n";
    }
  }
  
  return 0;
}
