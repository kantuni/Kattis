#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> words;
  string w;
  while (cin >> w) {
    words.push_back(w);
  }
  
  set<string> s;
  for (int i = 0; i < words.size(); i++) {
    for (int j = i + 1; j < words.size(); j++) {
      s.insert(words[i] + words[j]);
      s.insert(words[j] + words[i]);
    }
  }
  
  for (auto cw: s) {
    cout << cw << "\n";
  }
  return 0;
}
