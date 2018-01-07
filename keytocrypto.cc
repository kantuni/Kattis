#include <bits/stdc++.h>
using namespace std;

char shift(char c, char k) {
  return (26 + (c - 'A') - (k - 'A')) % 26 + 'A';
}

int main() {
  string c, k;
  cin >> c >> k;
  
  for (int i = 0; i < c.size(); i++) {
    char l = shift(c[i], k[i]);
    cout << l;
    k += string(1, l);
  }
  cout << "\n";
  
  return 0;
}
