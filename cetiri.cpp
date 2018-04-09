#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a > b) {
    swap(a, b);
  }
  if (a > c) {
    swap(a, c);
  }
  if (b > c) {
    swap(b, c);
  }
  if (c - b == b - a) {
    cout << c + c - b << "\n";
  } else if (c - b > b - a) {
    cout << b + b - a << "\n";
  } else {
    cout << a + c - b << "\n";
  }
  return 0;
}
