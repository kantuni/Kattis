#include <iostream>
using namespace std;

int main() {
  int k, n;
  cin >> k >> n;
  int passed = 0;
  while (n--) {
    int t;
    char z;
    cin >> t >> z;
    passed += t;
    if (z == 'T' and passed < 210) {
      k = k % 8 + 1;
    }
  }
  cout << k << "\n";
  return 0;
}
