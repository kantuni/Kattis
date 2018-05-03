#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  set<string> cards;
  map<char, int> suits;
  for (int i = 0; i < s.size(); i += 3) {
    string c = s.substr(i, 3);
    if (cards.count(c) > 0) {
      cout << "GRESKA" << "\n";
      return 0;
    }
    cards.insert(c);
    suits[s[i]]++;
  }
  cout << 13 - suits['P'] << " ";
  cout << 13 - suits['K'] << " ";
  cout << 13 - suits['H'] << " ";
  cout << 13 - suits['T'] << "\n";
  return 0;
}
