#include "BinaryTree.hpp"
#include <iostream>

int main(){

    BinaryTree tree;


    tree.root = tree.insert(tree.root, 5);
    tree.root = tree.insert(tree.root, 10);
    tree.root = tree.insert(tree.root, 3);
    Node* foundNode = tree.search(tree.root, 10);
    std::cout << "Found node: " << foundNode->data << std::endl;
    
    return 0;
}