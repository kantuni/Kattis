#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string bin;
  while (n > 0) {
    bin += to_string(n % 2);
    n /= 2;
  }
  int ans = 0;
  for (int i = 0; i < bin.size(); i++) {
    ans += (bin[bin.size() - 1 - i] - '0') * (1 << i);
  }
  cout << ans << endl;
  return 0;
}
