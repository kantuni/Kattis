#include <bits/stdc++.h>
using namespace std;

int main() {
  string name;
  cin >> name;
  string compact = string(1, name[0]);
  for (int i = 1; i < name.size(); i++) {
    if (name[i] != name[i - 1]) {
      compact += string(1, name[i]);
    }
  }
  cout << compact << "\n";
  return 0;
}
