#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int h, t;
    cin >> h >> t;
    if (h + t == 0) {
      break;
    }
    int ans = 0;
    if (t == 0) {
      ans = -1;
    } else {
      while (true) {
        int heads = h + t / 2;
        if (t % 2 == 0 and heads % 2 == 0) {
          ans += t / 2;
          ans += heads / 2;
          break;
        }
        t++;
        ans++;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}
