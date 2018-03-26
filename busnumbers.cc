#include <bits/stdc++.h>
using namespace std;

void print(int start, int end) { 
  if (start == end) cout << start;
  else if (end - start == 1) cout << start << " " << end;
  else cout << start << "-" << end;
}

int main() {
  int n;
  cin >> n;
  vector<int> numbers(n);
  for (int i = 0; i < n; i++) cin >> numbers[i];
  sort(numbers.begin(), numbers.end());
  int start = numbers[0], end = start;
  for (int i = 1; i < n; i++) {
    if (numbers[i] - numbers[i - 1] == 1) end = numbers[i];
    else {
      print(start, end);
      cout << " ";
      start = numbers[i];
      end = start;
    }
  }
  print(start, end);
  cout << "\n";
  return 0;
}
