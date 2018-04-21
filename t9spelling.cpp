#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  vector<string> t9 = {
    "2", "22", "222",
    "3", "33", "333",
    "4", "44", "444",
    "5", "55", "555",
    "6", "66", "666",
    "7", "77", "777", "7777",
    "8", "88", "888",
    "9", "99", "999", "9999"
  };
  int t = 1;
  while (n--) {
    string line, m;
    getline(cin, line);
    for (int i = 0; i < line.size(); i++) {
      char prev = '-', curr = '-';
      if (i > 0) {
        prev = (line[i - 1] == ' ') ? ' ' : t9[line[i - 1] - 'a'][0];
      }
      curr = (line[i] == ' ') ? ' ' : t9[line[i] - 'a'][0];
      if (prev == curr) {
        m += " ";
      }
      if (line[i] == ' ') {
        m += "0";
      } else {
        m += t9[line[i] - 'a'];
      }
    }
    cout << "Case #" << t++ << ": " << m << "\n";
  }
  return 0;
}
