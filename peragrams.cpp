#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;
  vector<int> f(26, 0);
  for (char c: w) {
    f[c - 'a']++;
  }
  int miss = 0;
  for (int fi: f) {
    if (fi % 2) {
      miss++;
    }
  }
  cout << (miss > 1 ? miss - 1 : 0) << endl;
  return 0;
}
