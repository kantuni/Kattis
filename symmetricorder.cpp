#include <bits/stdc++.h>
using namespace std;

int main() {
  int sn = 1;
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    cout << "SET " << sn << endl;
    stack<string> s;
    for (int i = 0; i < n; i++) {
      string name;
      cin >> name;
      if (i % 2) {
        s.push(name);
      } else {
        cout << name << endl;
      }
    }
    while (!s.empty()) {
      cout << s.top() << endl;
      s.pop();
    }
    sn++;
  }
  return 0;
}
