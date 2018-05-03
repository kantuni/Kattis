#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> steps(4);
  for (int i = 0; i < 4; i++) {
    cin >> steps[i];
  }
  sort(steps.begin(), steps.end());
  cout << steps[0] * steps[2] << "\n";
  return 0;
}
