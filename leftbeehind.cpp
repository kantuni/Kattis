#include <iostream>
using namespace std;

int main() {
  while (true) {
    int x, y;
    cin >> x >> y;
    if (x == 0 and y == 0) {
      break;
    }
    if (x + y == 13) {
      cout << "Never speak again." << endl;
    } else if (y > x) {
      cout << "Left beehind." << endl;
    } else if (x > y) {
      cout << "To the convention." << endl;
    } else {
      cout << "Undecided." << endl;
    }
  }
  return 0;
}
