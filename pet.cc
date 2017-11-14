#include <iostream>
using namespace std;

int main() {
  int imax, max = 0;
  for (int i = 0; i < 5; i++) {
    int sum = 0;
    for (int j = 0; j < 4; j++) {
      int p;
      cin >> p;
      sum += p;
    }
    
    if (sum > max) {
      imax = i;
      max = sum;
    }
  }
  
  cout << imax + 1 << " " << max << "\n";
  return 0;
}
