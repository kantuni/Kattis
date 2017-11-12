#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  if (n % 2 == 1) {
    cout << "Alice\n";
  } else {
    cout << "Bob\n";
  }
  return 0;
}
