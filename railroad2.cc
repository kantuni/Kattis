#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  
  if (y % 2 == 0) {
    cout << "possible\n";
  } else {
    cout << "impossible\n";
  }
  
  return 0;
}
