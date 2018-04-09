#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int t = 0, c = 0, g = 0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'T') {
      t++;
    } else if (s[i] == 'C') {
      c++;
    } else {
      g++;
    }
  }
  
  int ans = t * t + c * c + g * g;
  while (t > 0 && c > 0 && g > 0) {
    ans += 7;
    t--;
    c--;
    g--;
  }
  cout << ans << "\n";
  return 0;
}
