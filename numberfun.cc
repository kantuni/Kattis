#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int a, b, c;
    cin >> a >> b >> c;
    bool c1 = a + b == c;
    bool c2 = abs(a - b) == c;
    bool c3 = a * b == c;
    bool c4 = 1.0 * a / b == c;
    bool c5 = 1.0 * b / a == c;
    if (c1 || c2 || c3 || c4 || c5) {
      cout << "Possible\n";
    } else {
      cout << "Impossible\n";
    }
  }
  return 0;
}