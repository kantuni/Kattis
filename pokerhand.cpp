#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, int> memo;
  int ans = 0;
  for (int i = 0; i < 5; i++) {
    char rank, suit;
    cin >> rank >> suit;
    memo[rank]++;
    ans = max(ans, memo[rank]);
  }
  cout << ans << "\n";
  return 0;
}
