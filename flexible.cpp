#include <bits/stdc++.h>
using namespace std;

int main() {
  int w, p;
  cin >> w >> p;
  vector<int> parts(p + 2);
  parts[0] = 0;
  parts[p + 1] = w;
  for (int i = 0; i < p; i++) {
    cin >> parts[i + 1];
  }
  set<int> space;
  for (int i = 0; i < parts.size() - 1; i++) {
    for (int j = i + 1; j < parts.size(); j++) {
      space.insert(parts[j] - parts[i]);
    }
  }
  for (auto s: space) {
    cout << s << " ";
  }
  cout << "\n";
  return 0;
}
