#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    if (a == 0 and b == 0) {
      break;
    }
    unordered_map<int, int> A, B;
    int sa = 0, sb = 0;
    A[a] = sa++;
    B[b] = sb++;
    int na = a, nb = b;
    int meet = 1;
    while (true) {
      if (A.count(nb) or B.count(na)) {
        meet = A.count(nb) ? nb : na;
        break;
      }
      if (na == 1 and nb == 1) {
        break;
      }
      if (na != 1) {
        na = (na % 2) ? 3 * na + 1 : na / 2;
        if (!A.count(na)) {
          A[na] = sa;
        }
        sa++;
      }
      if (nb != 1) {
        nb = (nb % 2) ? 3 * nb + 1 : nb / 2;
        if (!B.count(nb)) {
          B[nb] = sb;
        }
        sb++;
      }
    }
    cout << a << " needs " << A[meet] << " steps, ";
    cout << b << " needs " << B[meet] << " steps, ";
    cout << "they meet at " << meet << "\n";
  }
  return 0;
}
