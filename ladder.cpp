#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, v;
  cin >> h >> v;
  cout << ceil(h / sin(v * acos(-1.0) / 180)) << "\n";
  return 0;
}
