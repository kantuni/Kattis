#include <bits/stdc++.h>
using namespace std;

int main() {
  string line;
  while (getline(cin, line)) {
    istringstream iss(line);
    string month;
    int day, year;
    int hh1, mm1, hh2, mm2;
    char colon;
    iss >> month >> day >> year;
    iss >> hh1 >> colon >> mm1;
    iss >> hh2 >> colon >> mm2;
    cout << month << " " << day << " " << year << " ";
    if (mm1 > mm2) {
      hh2--;
    }
    cout << hh2 - hh1 << " hours ";
    cout << (mm2 - mm1 + 60) % 60 << " minutes" << endl;
  }
  return 0;
}
