#include <bits/stdc++.h>
using namespace std;

string encrypt(string m, int n) {
  string sigma = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
  reverse(m.begin(), m.end());
  for (char &l: m) {
    int index = sigma.find(l);
    l = sigma[(index + n) % sigma.size()];
  }
  return m;
}

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    string m;
    cin >> m;
    cout << encrypt(m, n) << "\n";
  }
  return 0;
}
