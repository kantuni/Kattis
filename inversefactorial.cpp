#include <bits/stdc++.h>
using namespace std;

int main() {
  string nf;
  cin >> nf;
  int lnf = nf.size();
  if (lnf < 4) {
    int nfi = stoi(nf);
    int total = 1;
    int i = 2;
    while (total != nfi) {
      total *= i;
      i++;
    }
    cout << i - 1 << endl;
  } else {
    double total = 0;
    int i = 2;
    while (total < lnf) {
      total += log10(i);
      i++;
    }
    cout << i - 2 << endl;
  }
  return 0;
}
