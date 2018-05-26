#include <bits/stdc++.h>
using namespace std;

struct Node {
  int value, size;
  Node *left, *right;

  Node(int value) {
    this->value = value;
    this->size = 1;
    this->left = NULL;
    this->right = NULL;
  }
  
  void insert(int value) {
    if (value < this->value) {
      if (this->left == NULL) {
        this->left = new Node(value);
      } else {
        this->left->insert(value);
      }
    } else {
      if (this->right == NULL) {
        this->right = new Node(value);
      } else {
        this->right->insert(value);
      }
    }
    this->size += 1;
  }

  int smallest(int k) {
    int m = (this->left != NULL) ? this->left->size : 0;
    if (k == m + 1) {
      return this->value;
    } else if (k <= m) {
       return this->left->smallest(k);
    } else {
      return this->right->smallest(k - m - 1);
    }
  }
};

int main() {
  int n;
  cin >> n;
  unordered_map<string, Node*> memo;
  while (n--) {
    string s;
    int y;
    cin >> s >> y;
    if (memo[s] == NULL) {
      memo[s] = new Node(y);
    } else {
      memo[s]->insert(y);
    }
  }
  int q;
  cin >> q;
  while (q--) {
    string s;
    int k;
    cin >> s >> k;
    cout << memo[s]->smallest(k) << "\n";
  }
  return 0;
}
