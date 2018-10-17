#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  bool ok = true;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if (s == "mumble") {
      continue;
    } else if (stoi(s) != i + 1) {
      ok = false;
    }
  }
  if (ok) {
    cout << "makes sense" << "\n";
  } else {
    cout << "something is fishy" << "\n";
  }
  return 0;
}
