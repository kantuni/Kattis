#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  
  if (x % 2 == 1 && y % 2 == 1) {
    cout << "impossible\n";
  } else {
    cout << "possible\n";
  }
  
  return 0;
} 
