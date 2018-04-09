#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while (n--) {
    string line;
    getline(cin, line);
    if (line.substr(0, 10) == "Simon says") {
      cout << line.substr(10) << "\n";
    }
  }
  return 0;
}
