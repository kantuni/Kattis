#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  unordered_map<string, bool> inside;
  while (n--) {
    string action, name;
    cin >> action >> name;
    if (!inside.count(name)) {
      inside[name] = false;
    }
    cout << name;
    if (action == "entry") {
      cout << " entered";
      cout << (inside[name] ? " (ANOMALY)" : "") << endl;
      inside[name] = true;
    } else {
      cout << " exited";
      cout << (!inside[name] ? " (ANOMALY)" : "") << endl;
      inside[name] = false;
    }
  }
  return 0;
}
