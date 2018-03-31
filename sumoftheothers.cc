#include <bits/stdc++.h>
using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    istringstream iss(line);
    vector<int> nums;
    int n, sum = 0;
    while (iss >> n) {
      nums.push_back(n);
      sum += n;
    }
    for (int i = 0; i < nums.size(); i++) {
      if (sum - nums[i] == nums[i]) {
        cout << nums[i] << "\n";
        break;
      }
    }
  }
  return 0;
}
