#include <bits/stdc++.h>
using namespace std;

struct Node {
  int x, y, size;
  Node *left, *right;

  Node(int x, Node *left = NULL, Node *right = NULL) {
    this->x = x;
    this->y = rand();
    this->size = 1;
    this->left = left;
    this->right = right;
  }

  void recalc() {
    int l = (this->left != NULL) ? this->left->size : 0;
    int r = (this->right != NULL) ? this->right->size : 0;
    this->size = l + r + 1;
  }

  Node* split(int x, Node *T) {
    if (T == NULL) return NULL;
    Node *root;
    if (x < T->x) {
      Node *S = split(x, T->left);
      Node *SL = (S != NULL) ? S->left : NULL;
      Node *SR = (S != NULL) ? S->right : NULL;
      T->left = SR;
      root = new Node(x, SL, T);
    } else {
      Node *S = split(x, T->right);
      Node *SL = (S != NULL) ? S->left : NULL;
      Node *SR = (S != NULL) ? S->right : NULL;
      T->right = SL;
      root = new Node(x, T, SR);
    }
    root->recalc();
    return root;
  }

  Node* insert(int x) {
    return split(x, this);
  }

  int at(int k) {
    int m = (this->left != NULL) ? this->left->size : 0;
    if (k == m + 1) {
      return this->x;
    } else if (k <= m) {
       return this->left->at(k);
    } else {
      return this->right->at(k - m - 1);
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
      memo[s] = memo[s]->insert(y);
    }
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
