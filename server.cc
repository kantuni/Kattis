#include <iostream>
using namespace std;

int main() {
  int n, T, count = 0, total = 0;
  cin >> n >> T;
  while (n--) {
    int t;
    cin >> t;
    if (total + t <= T) count++;
    total += t;
  }
  cout << count << "\n";
  return 0;
}
