#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    string name, d1, d2;
    int courses;
    cin >> name >> d1 >> d2 >> courses;
    int y1 = stoi(d1.substr(0, 4));
    int y2 = stoi(d2.substr(0, 4));
    cout << name << " ";
    if (y1 >= 2010 or y2 >= 1991) {
      cout << "eligible" << endl;
    } else if (courses >= 41) {
      cout << "ineligible" << endl;
    } else {
      cout << "coach petitions" << endl;
    }
  }
  return 0;
}
