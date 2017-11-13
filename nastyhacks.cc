#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  while (n--) {
    int r, e, c;
    cin >> r >> e >> c;
    
    if (e - c > r) {
      cout << "advertise\n";
    } else if (e - c < r) {
      cout << "do not advertise\n";
    } else {
      cout << "does not matter\n";
    }
  }
  
  return 0;
}
