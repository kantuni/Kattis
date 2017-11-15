#include <bits/stdc++.h>
using namespace std;

int main() {
  set<int> s;
  for (int i = 0; i < 10; i++) {
    int n;
    cin >> n;
    s.insert(n % 42);
  }
  cout << s.size() << "\n";
  return 0;
}
