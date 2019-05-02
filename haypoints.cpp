#include <bits/stdc++.h>
using namespace std;

int main() {
  int m, n;
  cin >> m >> n;
  map<string, int> memo;
  while (m--) {
    string w;
    int d;
    cin >> w >> d;
    memo[w] = d;
  }
  while (n--) {
    int ans = 0;
    while (true) {
      string line;
      getline(cin, line);
      if (line == ".") {
        cout << ans << endl;  
        break;
      }
      stringstream ss(line);
      string w;
      while (ss >> w) {
        ans += memo[w];
      }
    }
  }
  return 0;
}
