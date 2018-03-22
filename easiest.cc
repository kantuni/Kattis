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
  while (1) {
    int n;
    cin >> n;
    if (n == 0) break;
    int p = 11;
    while (dsum(p * n) != dsum(n)) p++;
    cout << p << "\n";
  }
  return 0;
}
