#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int g;
    cin >> g;
    vector<int> gnomes(g);
    for (int i = 0; i < g; i++) cin >> gnomes[i];
    for (int i = 1; i < g; i++) {
      if (gnomes[i] != gnomes[i - 1] + 1) {
        cout << i + 1 << "\n";
        break;
      }
    }
  }
  return 0;
}
