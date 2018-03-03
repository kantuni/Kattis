#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, n;
  cin >> r >> n;
  vector<int> used(r, 0);
  while (n--) {
    int num;
    cin >> num;
    used[num - 1] = 1;
  }
  bool empty = false;
  for (int i = 0; i < r; i++) {
    if (used[i] == 0) {
      empty = true;
      cout << i + 1 << "\n";
      break;
    }
  }
  if (!empty) cout << "too late\n"; 
  return 0;
}
