#include <bits/stdc++.h>
using namespace std;

struct Node {
  int x, y, size;
  Node *left, *right;

  Node(int x) {
    this->x = x;
    this->y = rand();
    this->size = 1;
    this->left = this->right = NULL;
  }
};

struct Treap {
  Node *root;

  public:
    Treap() { this->root = NULL; }
    int size(Node* node) { return (node != NULL) ? node->size : 0; }
    void insert(int x) { insert(this->root, x); }
    int at(int k) { return at(this->root, k); }

  private:
    void insert(Node* &node, int x) {
      if (node == NULL) {
        node = new Node(x);
        return;
      }
      node->size += 1;
      if (x < node->x) {
        insert(node->left, x);
        if (node->y < node->left->y) {
          node = rr(node);
        }
      } else {
        insert(node->right, x);
        if (node->y < node->right->y) {
          node = lr(node);
        }
      }
    }

    Node* lr(Node* node) {
      Node *r = node->right, *rl = r->left;
      swap(node->size, r->size);
      node->size += size(node->left) - size(r->right);
      r->left = node;
      node->right = rl;
      return r;
    }

    Node* rr(Node* node) {
      Node *l = node->left, *lr = l->right;
      swap(node->size, l->size);
      node->size += size(node->right) - size(l->left);
      l->right = node;
      node->left = lr;
      return l;
    }

    int at(Node* node, int k) {
      int m = size(node->left);
      if (k == m + 1) {
        return node->x;
      } else if (k > m) {
        return at(node->right, k - m - 1);
      } else {
        return at(node->left, k);
      }
    }
};

int main() {
  int n;
  cin >> n;
  unordered_map<string, Treap*> memo;
  while (n--) {
    string s;
    int year;
    cin >> s >> year;
    if (memo[s] == NULL) {
      memo[s] = new Treap();
    }
    memo[s]->insert(year);
  }
  int q;
  cin >> q;
  while (q--) {
    string s;
    int k;
    cin >> s >> k;
    cout << memo[s]->at(k) << "\n";
  }
  return 0;
}
