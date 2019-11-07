#include <bits/stdc++.h>
#define PI acos(-1.0)
using namespace std;

int main() {
  int h, v;
  cin >> h >> v;
  cout << ceil(h / sin(v * PI / 180)) << endl;
  return 0;
}
