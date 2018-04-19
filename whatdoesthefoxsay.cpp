#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    string line;
    getline(cin, line);
    istringstream iss(line);
    vector<string> sounds;
    string sound;
    while (iss >> sound) {
      sounds.push_back(sound);
    }
    unordered_set<string> known;
    while (true) {
      string line;
      getline(cin, line);
      if (line == "what does the fox say?") {
        break;
      }
      string animal, goes, sound;
      istringstream iss(line);
      iss >> animal >> goes >> sound;
      known.insert(sound);
    }
    for (auto s: sounds) {
      if (!known.count(s)) {
        cout << s << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
