#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> perm(n);
    for (int i = 0; i < n; i++) {
      cin >> perm[i];
    }
    cin.ignore();
    string m;
    getline(cin, m);
    while (m.size() % n) {
      m += " ";
    }
    cout << "'";
    for (int i = 0; m.size() and i < m.size() - n + 1; i += n) {
      for (int j = 0; j < n; j++) {
        cout << m[i + perm[j] - 1];
      }
    }
    cout << "'\n";
  }
  return 0;
}
