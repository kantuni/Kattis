#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    set<int> jack;
    int n, m;
    cin >> n >> m;
    if (n == 0 and m == 0) {
      break;
    }
    while (n--) {
      int cn;
      cin >> cn;
      jack.insert(cn);
    }
    int cnt = 0;
    while (m--) {
      int cn;
      cin >> cn;
      if (jack.count(cn)) {
        cnt++;
      }
    }
    cout << cnt << endl;
  }
  return 0;
}
