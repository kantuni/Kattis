#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> lines;
  string line;
  int n = 0;
  while (getline(cin, line)) {
    n = max(n, (int) line.size());
    lines.push_back(line);
  }
  int ans = 0;
  for (int i = 0; i < lines.size() - 1; i++) {
    int m = lines[i].size();
    ans += pow(n - m, 2);
  }
  cout << ans << "\n";
  return 0;
}
