#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();
  while (n--) {
    string s;
    getline(cin, s);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    vector<int> alphabet(26, 0);
    int counter = 0;
    for (int i = 0; i < s.size(); i++) {
      if (isalpha(s[i]) and alphabet[s[i] - 'a'] == 0) {
        alphabet[s[i] - 'a'] = 1;
        counter++;
      }
    }
    
    if (counter == 26) {
      cout << "pangram\n";
    } else {
      cout << "missing ";
      for (int i = 0; i < alphabet.size(); i++) {
        if (alphabet[i] == 0) {
          cout << (char) (i + 'a');
        }
      }
      cout << "\n";
    }
  }
  return 0;
}
