#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<vi> vvi;

ii find(vvi A, string s) {
  for (int i = 0; i < s.size(); i++) {
    vvi B(A.size() / 2, vi(A.size() / 2));
    ii c = find(B, s.substr(1));
    
    if (s[i] == '0') {
      return c;
    } else if (s[i] == '1') {
      return ii(c.first + A.size() / 2, c.second);
    } else if (s[i] == '2') {
      return ii(c.first, c.second + A.size() / 2);
    } else {
      return ii(c.first + A.size() / 2, c.second + A.size() / 2);
    }
  }
  return ii(0, 0);
}

int main() {
  string s;
  cin >> s;
  
  int zoom = s.size();
  int n = pow(2, zoom);
  vvi M(n, vi(n));
  ii c = find(M, s);
  
  printf("%d %d %d\n", zoom, c.first, c.second);
  return 0;
}
