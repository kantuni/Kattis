#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int g;
    cin >> g;
    set<int> s;
    for (int j = 0; j < g; j++) {
      int c;
      cin >> c;
      if (s.count(c)) {
        s.erase(c);
      } else {
        s.insert(c);
      }
    }
    cout << "Case #" << i + 1 << ": ";
    cout << *s.begin() << endl;
  }
  return 0;
}
