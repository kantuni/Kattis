#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, string> memo;
  bool end = false;
  while (true) {
    string line;
    getline(cin, line);
    if (line == "") {
      if (end) {
        break;
      } else {
        end = !end;
        continue;
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
        cout << "eh" << endl;
      } else {
        cout << memo[t] << endl;
      }
    }
  }
  return 0;
}
