#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
      cin >> p[i];
    }
    cin.ignore();
    string m;
    getline(cin, m);
    while (m.size() % n) {
      m += " ";
    }
    cout << "'";
    for (int i = 0; !m.empty() and i < m.size() - n + 1; i += n) {
      for (int j = 0; j < n; j++) {
        cout << m[i + p[j] - 1];
      }
    }
    cout << "'" << endl;
  }
  return 0;
}
