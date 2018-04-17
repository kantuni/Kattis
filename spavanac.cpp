#include <iostream>
using namespace std;

int main() {
  int h, m;
  cin >> h >> m;
  if (m > 45) {
    cout << h << " " << m - 45 << "\n";
  } else {
    cout << (h - 1 + 24) % 24 << " ";
    cout << (m - 45 + 60) % 60 << "\n";
  }
  return 0;
}
