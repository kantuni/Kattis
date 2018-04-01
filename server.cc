#include <iostream>
using namespace std;

int main() {
  int n, T;
  cin >> n >> T;
  int count = 0, total = 0;
  while (n--) {
    int t;
    cin >> t;
    if (total + t <= T) {
      count++;
    }
    total += t;
  }
  cout << count << "\n";
  return 0;
}
