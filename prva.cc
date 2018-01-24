#include <bits/stdc++.h>
using namespace std;

typedef vector<char> vc;
typedef vector<vc> vvc;

int main() {
  int r, c;
  cin >> r >> c;

  vvc crossword(r, vc(c));
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> crossword[i][j];
    }
  }
  
  vector<string> words;

  // horizontal
  for (int i = 0; i < r; i++) {
    string line;
    for (int j = 0; j < c; j++) {
      line += string(1, crossword[i][j]);
    }
    
    // split line by '#'
    stringstream ss(line);
    string token;
    while (getline(ss, token, '#')) {
      if (token.size() > 1) {
        words.push_back(token);
      }
    }
  }
  
  // vertical
  for (int i = 0; i < c; i++) {
    string line;
    for (int j = 0; j < r; j++) {
      line += string(1, crossword[j][i]);
    }
    
    // split line by '#'
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
