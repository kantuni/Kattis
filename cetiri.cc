#include <bits/stdc++.h>
using namespace std;

bool valid(vector<int> nums, int missing) {
  nums.push_back(missing);
  sort(nums.begin(), nums.end());
  int d1 = nums[1] - nums[0];
  int d2 = nums[2] - nums[1];
  int d3 = nums[3] - nums[2];
  return d1 == d2 and d2 == d3;
}

int main() {
  vector<int> nums(3);
  for (int i = 0; i < nums.size(); i++) cin >> nums[i];
  sort(nums.begin(), nums.end());
  int d1 = nums[1] - nums[0];
  int d2 = nums[2] - nums[1];
  if (d1 == d2) cout << nums[2] + d1 << "\n";
  else {
    vector<int> shift = {d1, -d1, d2, -d2};
    int missing;
    for (int i = 0; i < shift.size(); i++) {
      missing = nums[1] + shift[i];
      if (valid(nums, missing)) break;
    }
    cout << missing << "\n";
  }
  return 0;
}
