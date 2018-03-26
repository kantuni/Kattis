#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> numbers(n);
  for (int i = 0; i < n; i++) cin >> numbers[i];
  sort(numbers.begin(), numbers.end());
  map<int, vector<int> > range;
  range[numbers[0]].push_back(numbers[0]);
  for (int i = 1; i < n; i++) {
    if (numbers[i] - numbers[i - 1] == 1) {
      int curr = numbers[i];
      while (!range.count(curr)) curr--;
      range[curr].push_back(numbers[i]);
    } else range[numbers[i]].push_back(numbers[i]);
  }
  for (auto kv: range) {
    cout << kv.first;
    if (kv.second.size() == 1) {
      cout << " ";
      continue;
    }
    else if (kv.second.size() == 2) cout << " " << kv.second[1];
    else cout << "-" << kv.second[kv.second.size() - 1];
    cout << " ";
  }
  cout << "\n";
  return 0;
}
