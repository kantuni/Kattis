#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string bin;
  while (n) {
    bin += to_string(n % 2);
    n /= 2;
  }
  int ans = 0;
  for (int i = 0; i < bin.size(); i++) {
    ans += (bin[bin.size() - 1 - i] - '0') * pow(2, i);
  }
  cout << ans << "\n";
  return 0;
}
