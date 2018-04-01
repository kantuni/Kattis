#include <bits/stdc++.h>
using namespace std;

int main() {
  string l;
  cin >> l;
  string abbr = string(1, l[0]);
  for (int i = 1; i < l.size() - 1; i++) {
    if (l[i] == '-') {
      abbr += string(1, l[i + 1]);
    }
  }
  cout << abbr << "\n";
  return 0;
}
