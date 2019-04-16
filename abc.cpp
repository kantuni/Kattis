#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> nums(3);
  for (int i = 0; i < nums.size(); i++) {
    cin >> nums[i];
  }
  sort(nums.begin(), nums.end());
  string order;
  cin >> order;
  for (char l: order) {
    if (l == 'A') {
      cout << nums[0] << " ";
    } else if (l == 'B') {
      cout << nums[1] << " ";
    } else {
      cout << nums[2] << " ";
    }
  }
  cout << endl;
  return 0;
}
