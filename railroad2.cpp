#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  if (y % 2) {
    cout << "impossible" << "\n";
  } else {
    cout << "possible" << "\n";
  }
  return 0;
}
