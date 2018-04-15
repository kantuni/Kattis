#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int q;
  if (x > 0 and y > 0) {
    q = 1;
  } else if (x > 0 and y < 0) {
    q = 4;
  } else if (x < 0 and y > 0) {
    q = 2;
  } else if (x < 0 and y < 0) {
    q = 3;
  }
  cout << q << "\n";
  return 0;
}
