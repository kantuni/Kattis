#include <bits/stdc++.h>
using namespace std;

int main() {
  int t = 1;
  string line;
  while (getline(cin, line)) {
    istringstream iss(line);
    int n;
    iss >> n;
    vector<int> X(n);
    int min = 1e7, max = -1e7;
    for (int i = 0; i < n; i++) {
      iss >> X[i];
      if (X[i] < min) {
        min = X[i];
      }
      if (X[i] > max) {
        max = X[i];
      }
    }
    cout << "Case " << t << ": ";
    cout << min << " " << max << " " << max - min << "\n";
    t++;
  }
  return 0;
}
