#include <bits/stdc++.h>
using namespace std;

vector<int> values, tree;

void build(int node, int start, int end) {
  if (start == end) {
    tree[node] = values[start];
  } else {
    int mid = (start + end) / 2;
    build(2 * node + 1, start, mid);
    build(2 * node + 2, mid + 1, end);
    tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
  }
}

void update(int node, int start, int end, int index, int value) {
  if (start == end) {
    values[index] += value;
    tree[node] += value;
  } else {
    int mid = (start + end) / 2;
    if (index >= start and index <= mid) {
      update(2 * node + 1, start, mid, index, value);
    } else {
      update(2 * node + 2, mid + 1, end, index, value);
    }
    tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
  }
}

int query(int node, int start, int end, int l, int r) {
  if (start > r or end < l) {
    return 0;
  } else if (start >= l and end <= r) {
    return tree[node];
  } else {
    int mid = (start + end) / 2;
    int p1 = query(2 * node + 1, start, mid, l, r);
    int p2 = query(2 * node + 2, mid + 1, end, l, r);
    return p1 + p2;
  }
}

int main() {
  int n, k;
  cin >> n >> k;
  values.resize(n, 0);
  tree.resize(2 * n - 1);
  build(0, 0, n - 1);
  while (k--) {
    char cmd;
    cin >> cmd;
    if (cmd == 'F') {
      int index;
      cin >> index;
      if (values[index - 1] == 0) {
        update(0, 0, n - 1, index - 1, 1);
      } else {
        update(0, 0, n - 1, index - 1, -1);
      }
    } else {
      int l, r;
      cin >> l >> r;
      int ans = query(0, 0, n - 1, l - 1, r - 1);
      cout << ans << "\n";
    }
  }
  return 0;
}
