#include <bits/stdc++.h>
using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    transform(line.begin(), line.end(), line.begin(), ::tolower);
    if (line.find("problem") != string::npos) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }
  return 0;
}
