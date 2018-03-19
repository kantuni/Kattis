#include <iostream>
using namespace std;

int main() {
  int correct[6] = {1, 1, 2, 2, 2, 8};
  for (int i = 0; i < 6; i++) {
    int n;
    cin >> n;
    cout << correct[i] - n;
    if (i != 6) cout << " ";
  }
  cout << "\n";
  return 0;
}
