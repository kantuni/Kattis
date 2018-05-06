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
    int count = c1 + c2 + c3;
    if (count == 0) {
      cout << "impossible" << "\n";
    } else if (count == 1) {
      if (c1) {
        cout << "stack" << "\n";
      } else if (c2) {
        cout << "queue" << "\n";
      } else {
        cout << "priority queue" << "\n";
      }
    } else {
      cout << "not sure" << "\n";
    }
  }
  return 0;
}
