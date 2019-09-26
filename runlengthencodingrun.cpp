#include <bits/stdc++.h>
using namespace std;

string encode(string m) {
  string c;
  for (int i = 0; i < m.size(); i++) {
    int cnt = 1;
    for (int j = i + 1; j < m.size(); j++) {
      if (m[j] == m[i]) {
        cnt++;
      } else {
        break;
      }
    }
    c += m[i] + to_string(cnt);
    i += cnt - 1;
  }
  return c;
}

string decode(string c) {
  string m;
  for (int i = 0; i < c.size(); i++) {
    if (isdigit(c[i])) {
      int cnt = c[i] - '0';
      m += string(cnt - 1, c[i - 1]);
    } else {
      m += c[i];
    }
  }
  return m;
}

int main() {
  string action, s;
  cin >> action >> s;
  if (action == "E") {
    cout << encode(s) << endl;
  } else {
    cout << decode(s) << endl;
  }
  return 0;
}
