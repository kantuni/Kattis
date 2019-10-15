#include <iostream>
using namespace std;

int main() {
  int k;
  cin >> k;
  int a = 0, b = 1;
  while (k > 1) {
    int tmp = b;
    b = a + b;
    a = tmp;
    k--;
  }
  cout << a << " " << b << endl;
  return 0;
}
