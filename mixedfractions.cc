#include <iostream>
using namespace std;

int main() {
  while (true) {
    int num, denom;
    cin >> num >> denom;
    
    if (num == 0 && denom == 0) {
      break;
    }
    
    cout << num / denom << " ";
    cout << num % denom << " / " << denom << "\n";
  }
  return 0;
}
