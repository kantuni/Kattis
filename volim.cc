#include <iostream>
using namespace std;

int main() {
  int k, n, passed = 0;
  cin >> k >> n;
  
  while (n--) {
    int t; char z;
    cin >> t >> z;
    
    passed += t;
    
    if (z == 'T' && passed < 210) {
      k = k % 8 + 1;
    }
  }
  
  cout << k << "\n";
  return 0;
}
