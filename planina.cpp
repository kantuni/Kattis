#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 2;
  while (n--) {
    ans = 2 * ans - 1;
  }
  cout << ans * ans << "\n";
  return 0;
}
