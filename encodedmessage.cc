#include <bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<vc> vvc;

string decode(string s) {
  int n = sqrt(s.size());
  vvc square(n, vc(n));
  
  int next = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      square[i][j] = s[next++];
    }
  }

  string m = "";
  for (int j = n - 1; j >= 0; j--) {
    for (int i = 0; i < n; i++) {
      m += string(1, square[i][j]);
    }
  }
  return m;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    cout << decode(s) << "\n";
  }
  return 0;
}
