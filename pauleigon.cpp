#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p, q;
  cin >> n >> p >> q;
  long long total = p + q;
  total /= n;
  if (total % 2 == 0) {
    cout << "paul" << "\n";
  } else {
    cout << "opponent" << "\n";
  }
  return 0;
}
