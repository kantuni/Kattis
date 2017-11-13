#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  
  int ra = 0, rb = 0;
  for (int i = 0; i < 3; i++) {
    ra += (a % 10) * pow(10, 2 - i);
    a /= 10;
    rb += (b % 10) * pow(10, 2 - i);
    b /= 10;
  }
  
  cout << max(ra, rb) << "\n";  
  return 0;
}
