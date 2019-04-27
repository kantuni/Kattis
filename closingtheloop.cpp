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
      int l;
      char c;
      cin >> l >> c;
      if (c == 'R') {
        red.push_back(l);
      } else {
        blue.push_back(l);
      }
    }
    sort(red.rbegin(), red.rend());
    sort(blue.rbegin(), blue.rend());
    int len = 0;
    for (int j = 0; j < min(red.size(), blue.size()); j++) {
      len += red[j] + blue[j] - 1;
      if (j != 0) {
        len -= 1;
      }
    }
    cout << "Case #" << i << ": ";
    cout << (len - 1 >= 0 ? len - 1 : 0) << endl;
  }
  return 0;
}
