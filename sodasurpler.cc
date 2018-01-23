#include <iostream>
using namespace std;

int main() {
  int e, f, c;
  cin >> e >> f >> c;
  int total = e + f, count = 0;
  while (total >= c) {
    total = total - c + 1;
    count++;
  }
  cout << count << "\n";
  return 0;
}
