#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string line;
    getline(cin, line);
    if (line.size() > 10 and line.substr(0, 10) == "simon says") {
      cout << line.substr(11);
    }
    cout << "\n";
  }
  return 0;
}
