#include <iostream>
using namespace std;

int main() {
  int n, T;
  cin >> n >> T;
  int ans = 0, total = 0;
  while (n--) {
    int t;
    cin >> t;
    if (total + t <= T) {
      ans++;
    }
    total += t;
  }
  cout << ans << endl;
  return 0;
}
