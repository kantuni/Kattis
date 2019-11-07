#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;
  int n;
  cin >> n;
  int ans = x;
  while (n--) {
    int p;
    cin >> p;
    ans += x - p;
  }
  cout << ans << endl;
  return 0;
}
