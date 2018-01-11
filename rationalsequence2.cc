#include <bits/stdc++.h>
using namespace std;

int main() {
  int p;
  cin >> p;
  
  while (p--) {
    int k, p, q;
    char c;
    cin >> k >> p >> c >> q;
    
    queue<pair<int, int> > qp;
    qp.push(make_pair(1, 1));
    int n = 1;
    
    while (true) {
      int x = qp.front().first;
      int y = qp.front().second;
      
      if (x == p && y == q) {
        cout << k << " " << n << "\n";
        break;
      }
      
      qp.push(make_pair(x, x + y));
      qp.push(make_pair(x + y, y));
      qp.pop();
      n++;
    }
  }
  
  return 0;
}
