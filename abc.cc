#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> numbers(3);
  for (int i = 0; i < 3; i++) {
    cin >> numbers[i];
  }
  sort(numbers.begin(), numbers.end());
  
  string order;
  cin >> order;
  for (char l: order) {
    if (l == 'A') cout << numbers[0] << " ";
    else if (l == 'B') cout << numbers[1] << " ";
    else cout << numbers[2] << " ";
  }
  cout << "\n";
  return 0;
}
