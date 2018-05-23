#include <bits/stdc++.h>
using namespace std;

map<int, int> memo;

int meet(int a, int b) {
  set<int> visited;
  while (a != 1) {
    visited.insert(a);
    a = memo[a];
  }
  while (b != 1) {
    if (visited.count(b)) {
      return b;
    }
    b = memo[b];
  }
  return 1;
}

int main() {
  int a, b;
  while (cin >> a >> b) {
    if (a == 0 and b == 0) {
      break;
    }
    int ac = a;
    while (ac != 1 and !memo.count(ac)) {
      int next;
      if (ac % 2) {
        next = 3 * ac + 1;
      } else {
        next = ac / 2;
      }
      memo[ac] = next;
      ac = next;
    }
    int bc = b;
    while (bc != 1 and !memo.count(bc)) {
      int next;
      if (bc % 2) {
        next = 3 * bc + 1;
      } else {
        next = bc / 2;
      }
      memo[bc] = next;
      bc = next;
    }
    int c = meet(a, b);
    cout << a << " needs ";
    int sa = 0;
    while (a != c) {
      a = memo[a];
      sa++;
    }
    cout << sa << " steps, ";
    cout << b << " needs ";
    int sb = 0;
    while (b != c) {
      b = memo[b];
      sb++;
    }
    cout << sb << " steps, ";
    cout << "they meet at " << c << "\n";
  }
  return 0;
}
