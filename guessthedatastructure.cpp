#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  while (cin >> n) {
    stack<int> s;
    queue<int> q;
    priority_queue<int> pq;
    bool c1 = true, c2 = true, c3 = true;
    while (n--) {
      int type, x;
      cin >> type >> x;
      if (type == 1) {
        s.push(x);
        q.push(x);
        pq.push(x);
      } else if (type == 2) {
        if (s.size() == 0 or s.top() != x) {
          c1 = false;
        } else {
          s.pop();
        }
        if (q.size() == 0 or q.front() != x) {
          c2 = false;
        } else {
          q.pop();
        }
        if (pq.size() == 0 or pq.top() != x) {
          c3 = false;
        } else {
          pq.pop();
        }
      }
    }
    int cnt = c1 + c2 + c3;
    if (cnt == 0) {
      cout << "impossible" << endl;
    } else if (cnt == 1) {
      if (c1) {
        cout << "stack" << endl;
      } else if (c2) {
        cout << "queue" << endl;
      } else {
        cout << "priority queue" << endl;
      }
    } else {
      cout << "not sure" << endl;
    }
  }
  return 0;
}
