#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, string> d;
  bool end = false;
  while (true) {
    string line;
    getline(cin, line);
    if (line == "") {
      if (end) break;
      else end = !end;
      continue;
    }
    istringstream iss(line);
    if (!end) {
      string w, t;
      iss >> w >> t;
      d[t] = w;
    } else {
      string t;
      iss >> t;
      if (!d.count(t)) cout << "eh\n";
      else cout << d[t] << "\n";
    }
  }
  return 0;
}
