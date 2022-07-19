#include <bits/stdc++.h>
using namespace std;

struct Problem {
  bool v = false;
  int w = 0;
  int m;
};

int main() {
  map<char, Problem> memo;
  while (true) {
    int m;
    cin >> m;
    if (m == -1) {
      break;
    }
    char l;
    string v;
    cin >> l >> v;
    Problem p;
    if (memo.count(l)) {
      p = memo[l];
    }
    if (v == "right") {
      p.m = m;
      p.v = true;
    } else if (!p.v) {
      p.m = m;
      p.w++;
    }
    memo[l] = p;
  }
  int solved = 0, total = 0;
  for (auto [_, p]: memo) {
    if (p.v) {
      total += p.m + (20 * p.w);
      solved++;
    }
  }
  cout << solved << " " << total << "\n";
  return 0;
}
