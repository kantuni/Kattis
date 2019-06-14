#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<int> nums;
    while (true) {
      int n;
      cin >> n;
      if (n == 0) {
        break;
      }
      nums.push_back(n);
    }
    int ans = 0;
    for (int i = 0; i < nums.size() - 1; i++) {
      if (nums[i + 1] > 2 * nums[i]) {
        ans += nums[i + 1] - 2 * nums[i];
      }
    }
    cout << ans << endl;
  }
  return 0;
}
