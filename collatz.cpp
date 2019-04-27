#include <bits/stdc++.h>
using namespace std;

int main() {
  long long a, b;
  while (cin >> a >> b) {
    if (a == 0 and b == 0) {
      break;
    }
    map<long long, long long> fa;
    long long ac = a, acnt = 0;
    fa[ac] = 0;
    while (ac != 1) {
      ac = (ac % 2) ? 3 * ac + 1 : ac / 2;
      acnt++;
      fa[ac] = acnt;
    }
    long long c;
    long long bc = b, bcnt = 0;
    if (fa.count(b)) {
      c = b;
    } else {
      while (bc != 1) {
        bc = (bc % 2) ? 3 * bc + 1 : bc / 2;
        bcnt++;
        if (fa.count(bc)) {
          c = bc;
          break;
        }
      }
    }
    long long sa = fa[c], sb = bcnt;
    cout << a << " needs " << sa << " steps, ";
    cout << b << " needs " << sb << " steps, ";
    cout << "they meet at " << c << endl;
  }
  return 0;
}
