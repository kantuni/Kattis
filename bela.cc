#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<char, int> d, nd;
  d['A'] = 11;  nd['A'] = 11;
  d['K'] = 4;   nd['K'] = 4;
  d['Q'] = 3;   nd['Q'] = 3;
  d['J'] = 20;  nd['J'] = 2;
  d['T'] = 10;  nd['T'] = 10;
  d['9'] = 14;  nd['9'] = 0;
  d['8'] = 0;   nd['8'] = 0;
  d['7'] = 0;   nd['7'] = 0;
  int n;
  cin >> n;
  char b;
  cin >> b;
  int ans = 0;
  n *= 4;
  while (n--) {
    char num, suit;
    cin >> num >> suit;
    if (suit == b) {
      ans += d[num];
    } else {
      ans += nd[num];
    }
  }
  cout << ans << "\n";
  return 0;
}
