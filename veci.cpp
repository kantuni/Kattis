#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  cin >> x;
  int xn = stoi(x);
  sort(x.begin(), x.end());
  int sm = 1e7;
  do {
    int xp = stoi(x);
    if (xp > xn and xp < sm) {
      sm = xp;
    }
  } while (next_permutation(x.begin(), x.end()));
  cout << (sm < 1e7 ? sm : 0) << "\n";
  return 0;
}
