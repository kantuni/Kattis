#include <bits/stdc++.h>
using namespace std;

int main() {
  int p, n;
  cin >> p >> n;
  set<string> parts;
  int found = -1;
  for (int i = 1; i <= n; i++) {
    string part;
    cin >> part;
    parts.insert(part);
    if (found == -1 and parts.size() == p) {
      found = i;
    }
  }
  if (found > 0) {
    cout << found << endl;
  } else {
    cout << "paradox avoided" << endl;
  }
  return 0;
}
