#include <bits/stdc++.h>
using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    transform(line.begin(), line.end(), line.begin(), ::tolower);
    if (line.find("problem") != string::npos) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
  return 0;
}
