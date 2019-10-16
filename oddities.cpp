#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    if (x % 2) {
      cout << x << " is odd" << endl;
    } else {
      cout << x << " is even" << endl;
    }
  }
  return 0;
}
