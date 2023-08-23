#ifndef AVL_TREE_H
#define AVL_TREE_H

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
    int height;
};

struct Node* createNode(int data);
int getHeight(struct Node* node);
int getBalanceFactor(struct Node* node);
struct Node* rotateRight(struct Node* y);
struct Node* rotateLeft(struct Node* x);
struct Node* insert(struct Node* root, int data);
void preOrder(struct Node* root);
void inOrder(struct Node* root);
void postOrder(struct Node* root);
struct Node* search(struct Node* root, int data);

#endif
