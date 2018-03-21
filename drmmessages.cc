#include <iostream>
using namespace std;

int main() {
  string drm;
  cin >> drm;
  // 1
  string l = drm.substr(0, drm.size() / 2);
  string r = drm.substr(drm.size() / 2);
  // 2
  int rvl = 0, rvr = 0;
  for (int i = 0; i < drm.size() / 2; i++) {
    rvl += l[i] - 'A';
    rvr += r[i] - 'A';
  }
  for (int i = 0; i < drm.size() / 2; i++) {
    l[i] = (l[i] - 'A' + rvl) % 26 + 'A';
    r[i] = (r[i] - 'A' + rvr) % 26 + 'A';
  }
  // 3
  for (int i = 0; i < drm.size() / 2; i++) {
    l[i] = (l[i] - 'A' + r[i] - 'A') % 26 + 'A';
  }
  cout << l << "\n";
  return 0;
}
