#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159265359

int main() {
  int h, v;
  cin >> h >> v;
  cout << ceil(h / sin(v * PI / 180)) << "\n";
  return 0;
}
