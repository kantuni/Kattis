#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, long long> fromA;
long long C;

void Ato1(long long A) {
  fromA[A] = 0;
  long long cnt = 0;
  while (A > 1) {
    A = (A % 2) ? 3 * A + 1 : A / 2;
    cnt++;
    fromA[A] = cnt;
  }
}

long long BtoA(long long B) {
  if (fromA.count(B)) {
    C = B;
    return 0;
  }
  long long cnt = 0;
  while (B > 1) {
    B = (B % 2) ? 3 * B + 1 : B / 2;
    cnt++;
    if (fromA.count(B)) {
      C = B;
      return cnt;
    }
  }
  C = 1;
  return cnt;
}

int main() {
  long long A, B;
  while (cin >> A >> B) {
    if (A == 0 and B == 0) {
      break;
    }
    Ato1(A);                     // (1)
    long long Sb = BtoA(B);      // (2)
    long long Sa = fromA[C];     // (3)
    cout << A << " needs " << Sa << " steps, ";
    cout << B << " needs " << Sb << " steps, ";
    cout << "they meet at " << C << "\n";
    fromA.clear();
  }
  return 0;
}
