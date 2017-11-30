#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  map<int, string> cups;
  while (n--) {
    string s1, s2;
    cin >> s1 >> s2;
    
    if (isdigit(s1[0])) {
      int r = stoi(s1) / 2;
      cups[r] = s2;
    } else {
      int r = stoi(s2);
      cups[r] = s1; 
    }
  }
  
  for (auto c: cups) {
    cout << c.second << "\n";
  }
  return 0;
}
