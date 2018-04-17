#include <iostream>
using namespace std;

int main() {
  int p;
  cin >> p;
  while (p--) {
    int k, n;
    cin >> k >> n;
    long long s1 = 0, s2 = 0, s3 = 0;
    s1 = (n + 1) * n / 2;
    for (int i = 1, c = 0; c < 2 * n; i++, c++) {
      if (i % 2 == 1) {
        s2 += i;
      } else {
        s3 += i;
      }
    }
    cout << k << " " << s1 << " ";
    cout << s2 << " " << s3 << "\n";
  }
  return 0;
}
