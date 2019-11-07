#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  vector<int> h(6);
  int sum = 0;
  for (int i = 0; i < 6; i++) {
    cin >> h[i];
    sum += h[i];
  }
  int a, b;
  cin >> a >> b;
  set<int, greater<int>> s1, s2;
  bool found = false;
  for (int i = 0; !found and i < 6; i++) {
    for (int j = i + 1; !found and j < 6; j++) {
      for (int k = j + 1; !found and k < 6; k++) {
        if (i != j and j != k) {
          int tmp = h[i] + h[j] + h[k];
          if (tmp == a and sum - tmp == b) {
            s1.insert(h[i]);
            s1.insert(h[j]);
            s1.insert(h[k]);
            found = true;
          }
        }
      }
    }
  }
  for (int i = 0; i < 6; i++) {
    if (s1.count(h[i]) == 0) {
      s2.insert(h[i]);
    }
  }
  for (auto item: s1) {
    cout << item << " ";
  }
  for (auto item: s2) {
    cout << item << " ";
  }
  cout << endl;
  return 0;
}
