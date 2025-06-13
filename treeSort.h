//
// Created by shari on 31.05.2025.
//

#ifndef ALGORITHMS_TREESORT_H
#define ALGORITHMS_TREESORT_H
class Node {
public:
    int key;
    Node *left, *right;
    Node(int key) {
        this->key = key;
        left = right = nullptr;
    }
};

Node* newNode(int key);
void inOrder(Node* node, int array[], int& index);
Node* insert(Node* node, int key);
void treeSort(int array[], int n);

#endif //ALGORITHMS_TREESORT_H
