#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  if (m > n) {
    cout << "Dr. Chaz will have ";
    cout << (m - n == 1 ? "1 piece" : to_string(m - n) + " pieces");
    cout << " of chicken left over!\n";
  } else {
    cout << "Dr. Chaz needs ";
    cout << (n - m == 1 ? "1 more piece" : to_string(n - m) + " more pieces");
    cout << " of chicken!\n";
  }
  return 0;
}
