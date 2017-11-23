#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  
  int zoom = s.size();
  int n = pow(2, zoom);
  int x = 0, y = 0;
  
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '1') {
      x += n / 2;
    } else if (s[i] == '2') {
      y += n / 2;
    } else if (s[i] == '3') {
      x += n / 2;
      y += n / 2;
    }
    n /= 2;
  }
  
  printf("%d %d %d\n", zoom, x, y);
  return 0;
}
