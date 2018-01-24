#include <bits/stdc++.h>
using namespace std;

int main() {
  string w;
  cin >> w;
  
  vector<int> frequency(26, 0);
  for (char c: w) {
    frequency[c - 'a']++;
  }
  
  int miss = 0;
  for (int i = 0; i < frequency.size(); i++) {
    if (frequency[i] % 2 == 1) {
      miss++;
    }
  }
  
  cout << (miss > 1 ? miss - 1 : 0) << "\n";
  return 0;
}
