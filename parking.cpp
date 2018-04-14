#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  vector<int> cars(101, 0);
  for (int i = 0; i < 3; i++) {
    int s, e;
    cin >> s >> e;
    for (int j = s; j < e; j++) {
      cars[j]++;
    }
  }
  int ans = 0;
  for (int i = 0; i < cars.size(); i++) {
    if (cars[i] == 1) {
      ans += a;  
    } else if (cars[i] == 2) {
      ans += 2 * b;  
    } else if (cars[i] == 3) {
      ans += 3 * c;
    }
  }
  cout << ans << "\n";
  return 0;
}
