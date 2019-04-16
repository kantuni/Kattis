#include <bits/stdc++.h>
using namespace std;

int main() {
  string john, doc;
  cin >> john >> doc;
  if (john.size() >= doc.size()) {
    cout << "go" << endl;
  } else {
    cout << "no" << endl;
  }
  return 0;
}
