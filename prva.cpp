#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  vector<vector<char>> CW(r, vector<char>(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> CW[i][j];
    }
  }
  vector<string> words;
  for (int i = 0; i < r; i++) {
    string line;
    for (int j = 0; j < c; j++) {
      line += string(1, CW[i][j]);
    }
    stringstream ss(line);
    string token;
    while (getline(ss, token, '#')) {
      if (token.size() > 1) {
        words.push_back(token);
      }
    }
  }
  for (int i = 0; i < c; i++) {
    string line;
    for (int j = 0; j < r; j++) {
      line += string(1, CW[j][i]);
    }
    stringstream ss(line);
    string token;
    while (getline(ss, token, '#')) {
      if (token.size() > 1) {
        words.push_back(token);
      }
    }
  }
  sort(words.begin(), words.end());
  cout << words[0] << "\n";
  return 0;
}
