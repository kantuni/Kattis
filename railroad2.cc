#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  
  if (x == 0 && y == 0) {
    cout << "possible\n";
  } else if (x == 0 && y > 0) {
    cout << (y % 2 == 0 ? "possible\n" : "impossible\n");
  } else if (x > 0 && y == 0) {
    cout << "possible\n";
  } else if (y == 2 * x || y == 4 * x || 3 * y == 4 * x) {
    cout << "possible\n";
  } else {
    cout << "impossible\n";
  }
  
  return 0;
}
