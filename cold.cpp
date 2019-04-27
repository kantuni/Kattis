#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  while (n--) {
    int temp;
    cin >> temp;
    if (temp < 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
