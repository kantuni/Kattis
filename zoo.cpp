#include <bits/stdc++.h>
using namespace std;

int main() {
  int ln = 1;
  while (true) {
    int n;
    cin >> n;
    cin.ignore();
    if (n == 0) {
      break;
    }
    map<string, int> memo;
    while (n--) {
      string line;
      getline(cin, line);
      istringstream iss(line);
      string animal;
      while (iss >> animal);
      transform(animal.begin(), animal.end(), animal.begin(), ::tolower);
      memo[animal] += 1;
    }
    cout << "List " << ln << ":" << endl;
    for (auto m: memo) {
      cout << m.first << " | " << m.second << endl;
    }
    ln++;
  }
  return 0;
}
