#include <bits/stdc++.h>
using namespace std;

int main() {
  set<string> s;
  string w;
  int n = 0;
  while (cin >> w) {
    s.insert(w);
    n++;
  }
  if (s.size() == n) {
    cout << "yes" << endl;
  } else {
    cout << "no" << endl;
  }
  return 0;
}
