#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if (m > n) {
    cout << "Dr. Chaz will have " << to_string(m - n);
    cout << (m - n == 1 ? " piece" : " pieces");
    cout << " of chicken left over!" << endl;
  } else {
    cout << "Dr. Chaz needs " << to_string(n - m);
    cout << " more " << (n - m == 1 ? "piece" : "pieces");
    cout << " of chicken!" << endl;
  }
  return 0;
}
