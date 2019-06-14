#include <iostream>
using namespace std;

int dsum(int n) {
  int sum = 0;
  while (n) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int l, d, x;
  cin >> l >> d >> x;
  for (int n = l; n <= d; n++) {
    if (dsum(n) == x) {
      cout << n << endl;
      break;
    }
  }
  for (int m = d; m >= l; m--) {
    if (dsum(m) == x) {
      cout << m << endl;
      break;
    }
  }
  return 0;
}
