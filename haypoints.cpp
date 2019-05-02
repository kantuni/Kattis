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
    string w;
    while (cin >> w) {
      if (w == ".") {
        cout << ans << endl;  
        break;
      }
      ans += memo[w];
    }
  }
  return 0;
}
