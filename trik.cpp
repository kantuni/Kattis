#include <bits/stdc++.h>
using namespace std;

int main() { 
  string moves;
  cin >> moves;
  int cups[3] = {1, 0, 0};
  for (int i = 0; i < moves.size(); i++) {
    if (moves[i] == 'A') {
      swap(cups[0], cups[1]);
    } else if (moves[i] == 'B') {
      swap(cups[1], cups[2]);
    } else {
      swap(cups[0], cups[2]);
    }
  }
  for (int i = 0; i < 3; i++) {
    if (cups[i] == 1) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}
