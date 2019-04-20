#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> alphabet = {
    "@", "8", "(", "|)", "3", "#", "6",
    "[-]", "|", "_|", "|<", "1", "[]\\/[]",
    "[]\\[]", "0", "|D", "(,)", "|Z", "$",
    "']['", "|_|", "\\/", "\\/\\/", "}{", "`/", "2"
  };
  string line;
  getline(cin, line);
  for (char l: line) {
    if (isalpha(l)) {
      cout << alphabet[toupper(l) - 'A'];
    } else {
      cout << l;
    }
  }
  cout << endl;
  return 0;
}
