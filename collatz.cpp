#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    if (a == 0 and b == 0) {
      break;
    }
    unordered_map<int, int> memo;
    int meet = 1;
    int ac = a, acnt = 0;
    while (ac != 1) {
      memo[ac] = acnt;
      ac = (ac % 2) ? 3 * ac + 1 : ac / 2;
      acnt++;
    }
    int bc = b, bcnt = 0;
    while (bc != 1) {
      if (memo.count(bc)) {
        meet = bc;
        break;
      }
      bc = (bc % 2) ? 3 * bc + 1 : bc / 2;
      bcnt++;
    }
    int sa = memo[meet], sb = bcnt;
    cout << a << " needs " << sa << " steps, ";
    cout << b << " needs " << sb << " steps, ";
    cout << "they meet at " << meet << "\n";
  }
  return 0;
}
