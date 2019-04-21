#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long double num = 0, denom = 0;
  while (n--) {
    int r;
    cin >> r;
    if (r != -1) {
      num += r;
      denom++;
    }
  }
  cout << num / denom << endl;
  return 0;
}
