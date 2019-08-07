#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int r, e, c;
    cin >> r >> e >> c;
    if (e - c > r) {
      cout << "advertise" << endl;
    } else if (e - c < r) {
      cout << "do not advertise" << endl;
    } else {
      cout << "does not matter" << endl;
    }
  }
  return 0;
}
