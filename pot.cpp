#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int x = 0;
  while (n--) {
    int p;
    cin >> p;
    x += pow(p / 10, p % 10);
  }
  cout << x << endl;
  return 0;
}
