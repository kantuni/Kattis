#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> memo;
  while (true) {
    string vote;
    getline(cin, vote);
    if (vote == "***") {
      break;
    }
    memo[vote]++;
  }
  vector<int> votes;
  for (auto m: memo) {
    votes.push_back(m.second);
  }
  sort(votes.rbegin(), votes.rend());
  if (votes[0] == votes[1]) {
    cout << "Runoff!" << endl;
  } else {
    for (auto m: memo) {
      if (m.second == votes[0]) {
        cout << m.first << endl;
        break;
      }
    }
  }
  return 0;
}
