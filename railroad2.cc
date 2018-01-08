#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  
  if (x == 0 && (y == 0 || y == 2)) {
    cout << "possible\n";
  } else if (x == 1 && (y == 0 || y == 4)) {
    cout << "possible\n";
  } else {
    cout << "impossible\n";
  }
  
  return 0;
} 
