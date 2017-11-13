#include <iostream>
using namespace std;

int main() {
  double c;
  int n;
  cin >> c >> n;
  
  double ans = 0;
  while (n--) {
    double l, w;
    cin >> l >> w;
    ans += l * w;
  }
  
  printf("%.7f\n", ans * c);
  return 0;
}
