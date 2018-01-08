#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  
  vector<string> comb = {
    "00", "02", "10", "12", "14", "24", "34"
  };
  
  string xy = to_string(x) + to_string(y);
  if (find(comb.begin(), comb.end(), xy) != comb.end()) {
    cout << "possible\n";
  } else {
    cout << "impossible\n";
  }
  
  return 0;
} 
