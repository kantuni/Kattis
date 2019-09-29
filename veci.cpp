#include <bits/stdc++.h>
#define INF (int) 1e9
using namespace std;

int main() {
  string x;
  cin >> x;
  int xn = stoi(x);
  sort(x.begin(), x.end());
  int sm = INF;
  do {
    int xp = stoi(x);
    if (xp > xn and xp < sm) {
      sm = xp;
    }
  } while (next_permutation(x.begin(), x.end()));
  int ans = sm != INF ? sm : 0;
  cout << ans << endl;
  return 0;
}
