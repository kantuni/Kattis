#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> dwarves(9);
  int sum = 0;
  
  for (int i = 0; i < 9; i++) {
    cin >> dwarves[i];
    sum += dwarves[i];
  }
  
  for (int i = 0; i < 8; i++) {
    for (int j = i + 1; j < 9; j++) {
      if (dwarves[i] + dwarves[j] == sum - 100) {
        dwarves[i] = 0;
        dwarves[j] = 0;
      }
    }
  }
  
  for (int i = 0; i < 9; i++) {
    if (dwarves[i] != 0) {
      cout << dwarves[i] << "\n";
    }
  }
  
  return 0;
}
