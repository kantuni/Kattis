#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;

int main() {
  int d, m;
  cin >> d >> m;
  
  vi dinm = {
    31, 28, 31, 
    30, 31, 30, 
    31, 31, 30, 
    31, 30, 31
  };
  
  vvi calendar(12);
  int start = 3; // 1.1.2009 = Thursday
  
  for (int i = 0; i < dinm.size(); i++) {
    calendar[i].resize(dinm[i]);
    calendar[i][0] = start;
    for (int j = 1; j < dinm[i]; j++) {
      calendar[i][j] = (calendar[i][j - 1] + 1) % 7;
    }
    start = (calendar[i][dinm[i] - 1] + 1) % 7;
  }
  
  vector<string> dofw = {
    "Monday", "Tuesday", "Wednesday", 
    "Thursday", "Friday", "Saturday", "Sunday"
  };
  
  cout << dofw[calendar[m - 1][d - 1]] << "\n";
  return 0;
}
