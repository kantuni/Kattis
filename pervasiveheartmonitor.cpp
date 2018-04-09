#include <bits/stdc++.h>
using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    istringstream iss(line);
    double average = 0.0;
    int n = 0;
    string name = "", word;
    while (iss >> word) {
      char first = word[0];
      if (isalpha(first)) name += " " + word;
      else {
        average += stod(word);
        n++;
      }
    }
    cout << fixed << setprecision(6);
    cout << average / n << name << "\n";
  }
  return 0;
}
