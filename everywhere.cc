#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  
  while (t--) {
    int n;
    cin >> n;
    set<string> s;
    while (n--) {
      string city;
      cin >> city;
      s.insert(city);
    }
    cout << s.size() << "\n";
  }
  
  return 0;
}
