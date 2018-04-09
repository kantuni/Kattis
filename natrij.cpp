#include <bits/stdc++.h>
using namespace std;

int main() {
  int hh1, mm1, ss1, hh2, mm2, ss2;
  char colon;
  cin >> hh1 >> colon >> mm1 >> colon >> ss1;
  cin >> hh2 >> colon >> mm2 >> colon >> ss2;
  if (ss2 < ss1) {
    mm2--;
  }
  if (mm2 < mm1) {
    hh2--;
  }
  int hh = (hh2 - hh1 + 24) % 24;
  int mm = (mm2 - mm1 + 60) % 60;
  int ss = (ss2 - ss1 + 60) % 60;
  if (hh == 0 and mm == 0 and ss == 0) {
    hh = 24;
  }
  printf("%02d:%02d:%02d\n", hh, mm, ss);
  return 0;
}
