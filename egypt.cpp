#include <iostream>
using namespace std;

int main() {
  while (true) {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0 and b == 0 and c == 0) {
      break;
    }
    if (a > b) {
      swap(a, b);
    }
    if (a > c) {
      swap(a, c);
    }
    if (b > c) {
      swap(b, c);
    }
    if (a * a + b * b == c * c) {
      cout << "right" << endl;
    } else {
      cout << "wrong" << endl;
    }
  }
  return 0;
}
