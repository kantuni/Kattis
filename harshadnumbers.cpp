#include <bits/stdc++.h>
using namespace std;

int dsum(int n) {
  int sum = 0;
  while (n > 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main() {
  int n;
  cin >> n;
  while (n % dsum(n) > 0) {
    n++;
  }
  cout << n << "\n";
  return 0;
}
