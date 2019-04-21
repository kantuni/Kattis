#include <bits/stdc++.h>
using namespace std;

void print(int start, int end) {
  if (start == end) {
    cout << start;
  } else if (end - start == 1) {
    cout << start << " " << end;
  } else {
    cout << start << "-" << end;
  }
}

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
  }
  sort(nums.begin(), nums.end());
  int start = nums[0], end = start;
  for (int i = 1; i < n; i++) {
    if (nums[i] - nums[i - 1] == 1) {
      end = nums[i];
    } else {
      print(start, end);
      cout << " ";
      start = nums[i];
      end = start;
    }
  }
  print(start, end);
  cout << endl;
  return 0;
}
