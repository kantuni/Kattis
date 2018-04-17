#include <iostream>
using namespace std;

int main() {
  int e, f, c;
  cin >> e >> f >> c;
  int total = e + f, ans = 0;
  while (total >= c) {
    total = total - c + 1;
    ans++;
  }
  cout << ans << "\n";
  return 0;
}
