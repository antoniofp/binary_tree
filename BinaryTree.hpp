#ifndef BINARYTREE_HPP
#define BINARYTREE_HPP

struct Node {
    int data;
    Node* left;
    Node* right;

    Node (int value);
};

class BinaryTree {
    public:
    Node* root;

    BinaryTree();

    Node* insert(Node* node, int value);
    void preOrder(Node* node);
    Node* search(Node* node, int value);
};

#endif // BINARYTREE_HPP