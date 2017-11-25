#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while (n--) {
    string line;
    getline(cin, line);
    if (line == "P=NP") {
      cout << "skipped\n";
    } else {
      istringstream iss(line);
      int a, b; char op;
      iss >> a >> op >> b;
      cout << a + b << "\n";
    }
  }
  return 0;
}
