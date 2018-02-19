#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int> heroes(3);
  cin >> heroes[0] >> heroes[1] >> heroes[2];
  
  for (int i = 0; i < 3; i++) {
    int l1 = 0, r1 = a;
    bool a1 = true;
    while (true) {
      if (l1 <= heroes[i] and heroes[i] <= r1) break;
      l1 = r1;
      r1 += a1 ? b : a;
      a1 = !a1;
    }
    
    int l2 = 0, r2 = c;
    bool a2 = true;
    while (true) {
      if (l2 <= heroes[i] and heroes[i] <= r2) break;
      l2 = r2;
      r2 += a2 ? d : c;
      a2 = !a2;
    }
    
    if (a1 and a2) {
      cout << "both\n";
    } else if (a1 or a2) {
      cout << "one\n";
    } else {
      cout << "none\n";
    }
  }
  
  return 0;
}
