#include <bits/stdc++.h>
using namespace std;

int main() {
  int k;
  cin >> k;
  string me, you;
  cin >> me >> you;
  int same = 0, diff = 0;
  for (int i = 0; i < me.size(); i++) {
    if (me[i] == you[i]) {
      same++;
    } else {
      diff++;
    }
  }
  int ans = (k > same) ? me.size() - (k - same) : k + diff;
  cout << ans << endl;
  return 0;
}
