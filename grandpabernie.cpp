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

  int find(int k) {
    if (this->left != NULL) {
      int l = this->left->size;
      if (k <= l) {
        return this->left->find(k);
      } else {
        if (this->size - l == 1) {
          return this->value;
        }
        return this->right->find(k - l);
      }
    } else if (this->right != NULL) {
      int r = this->right->size;
      if (this->size - r == k) {
        return this->value;
      } else {
        return this->right->find(k - 1);
      }
    }
    return this->value;
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
    cout << memo[s]->find(k) << "\n";
  }
  return 0;
}
