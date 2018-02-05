#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    int s;
    cin >> s;
    vector<int> red, blue;
    while (s--) {
      int l; char c;
      cin >> l >> c;
      if (c == 'R') red.push_back(l);
      else blue.push_back(l);
    }
    
    sort(red.rbegin(), red.rend());
    sort(blue.rbegin(), blue.rend());
    
    int length = 0;
    for (int j = 0; j < min(red.size(), blue.size()); j++) {
      length += red[j] + blue[j] - 1;
      if (j != 0) length -= 1;
    }
    printf("Case #%d: %d\n", i, (length - 1 >= 0) ? length - 1 : 0);
  }
  return 0;
}
