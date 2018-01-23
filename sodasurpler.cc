#include <iostream>
using namespace std;

int main() {
  int e, f, c;
  cin >> e >> f >> c;
  int total = 0;
  while ((e + f) / c != 0) {
    total += (e + f) / c;
    e = (e + f) / c;
    f = (e + f) % c;
  }
  cout << total << "\n";
  return 0;
}
