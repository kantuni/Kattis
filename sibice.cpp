#include <iostream>
using namespace std;

int main() {
  int n, w, h;
  cin >> n >> w >> h;
  while (n--) {
    int l;
    cin >> l;
    if (l * l <= w * w + h * h) {
      cout << "DA" << endl;
    } else {
      cout << "NE" << endl;
    }
  }
  return 0;
}
