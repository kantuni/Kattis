// NOTE: not solved yet

#include <bits/stdc++.h>
using namespace std;

// globals
unordered_map<int, int> ntoc;
unordered_map<int, vector<int>> cton;
vector<int> at;

void meet(vector<int> array) {
  for (auto val: array) {
    cout << val << " ";
  }
  cout << "\n";
  int size = array.size();
  if (array.size() > 1 and array[size - 1] == array[size - 2]) {
    at.push_back(array[size - 1]);
  }
}

int populate(int n, int m) {
  if (ntoc.count(n)) {
    int ans = ntoc[n] + m;
    cton[ans].push_back(n);
    meet(cton[ans]);
    return ans;
  }
  int next;
  if (n % 2) {
    next = 3 * n + 1;
  } else {
    next = n / 2;
  }
  int ans = populate(next, m + 1);
  ntoc[next] = ans - m - 1;
  cton[ans - m - 1].push_back(next);
  return ans;
}

int main() {
  int a, b;
  while (cin >> a >> b) {
    ntoc[1] = 0;
    cton[0] = {1};
    if (a == 0 and b == 0) {
      break;
    }
    int ca = populate(a, 0);
    ntoc[a] = ca;
    cton[ca].push_back(a);
    meet(cton[ca]);
    int cb = populate(b, 0);
    ntoc[b] = cb;
    cton[cb].push_back(b);
    meet(cton[cb]);
    sort(at.rbegin(), at.rend());
    cout << at.size() << "\n";
    /*
    int dest = at[0];
    cout << a << " needs " << ntoc[a] - ntoc[dest] << " steps, ";
    cout << b << " needs " << ntoc[b] - ntoc[dest] << " steps, ";
    cout << "they meet at " << dest << "\n";
    ntoc.clear();
    cton.clear();
    at.clear();
    */
  }
  return 0;
}
