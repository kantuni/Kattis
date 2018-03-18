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
    while (iss >> sound) sounds.push_back(sound);
    unordered_set<string> known;
    while (1) {
      string line;
      getline(cin, line);
      if (line == "what does the fox say?") break;
      string animal, goes, sound;
      istringstream iss(line);
      iss >> animal >> goes >> sound;
      known.insert(sound);
    }
    for (auto sound: sounds) {
      if (!known.count(sound)) {
        cout << sound << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
