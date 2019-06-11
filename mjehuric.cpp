#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  for (int i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < a.size() - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        for (int k = 0; k < a.size(); k++) {
          cout << a[k] << " ";
        }
        cout << endl;
      }
    }
  }
  return 0;
}
