#include <bits/stdc++.h>
using namespace std;

bool comparator(pair<string, string> a, pair<string, string> b) {
  auto [al, an] = a;
  auto [bl, bn] = b;
  if (al < bl) {
    return false;
  }
  if (al > bl) {
    return true;
  }
  if (an < bn) {
    return true;
  }
  if (an > bn) {
    return false;
  }
  return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<pair<string, string>> data;
    for (int i = 0; i < n; i++) {
      string name, level, cls;
      cin >> name >> level >> cls;
      name.pop_back();
      level = regex_replace(level, regex("upper"), "3");
      level = regex_replace(level, regex("middle"), "2");
      level = regex_replace(level, regex("lower"), "1");
      reverse(level.begin(), level.end());
      while (level.size() < 20) {
        level += "-2";
      }
      data.push_back({level, name});
    }
    sort(data.begin(), data.end(), comparator);
    for (auto [level, name]: data) {
      cout << name << endl;
    }
    cout << "==============================" << endl;
  }
  return 0;
}
