#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  while (cin >> a >> b) {
    if (a == 0 and b == 0) {
      break;
    }
    set<int> A, B;
    A.insert(a);
    B.insert(b);
    int na = a, nb = b, meet = 1;
    int cnt = 0;
    while (true) {
      set<int> AnB;
      set_intersection(
        A.begin(), A.end(), 
        B.begin(), B.end(),
        inserter(AnB, AnB.begin())
      );
      if (AnB.size()) {
        meet = *AnB.begin();
        break;
      }
      if (na == 1 and nb == 1) {
        break;
      } else if (na != 1) {
        na = (na % 2) ? 3 * na + 1 : na / 2;
        A.insert(na);
      } else if (nb != 1) {
        nb = (nb % 2) ? 3 * nb + 1 : nb / 2;
        B.insert(nb);
      }
    }
    cout << a << " needs ";
    int sa = 0;
    while (a != meet) {
      a = (a % 2) ? 3 * a + 1 : a / 2;
      sa++;
    }
    cout << sa << " steps, ";
    cout << b << " needs ";
    int sb = 0;
    while (b != meet) {
      b = (b % 2) ? 3 * b + 1 : b / 2;
      sb++;
    }
    cout << sb << " steps, ";
    cout << "they meet at " << meet << "\n";
  }
  return 0;
}
