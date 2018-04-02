#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string, string> memo;
  bool end = false;
  while (true) {
    string line;
    getline(cin, line);
    if (line == "") {
      if (end) {
        break;
      } else {
        end = !end;
      }
    }
    istringstream iss(line);
    if (!end) {
      string w, t;
      iss >> w >> t;
      memo[t] = w;
    } else {
      string t;
      iss >> t;
      if (!memo.count(t)) {
        cout << "eh\n";
      } else {
        cout << memo[t] << "\n";
      }
    }
  }
  return 0;
}
