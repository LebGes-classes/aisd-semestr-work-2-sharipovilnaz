//
// Created by shari on 31.05.2025.
//
#include <iostream>
using namespace std;
#include "treeSort.h"

Node* newNode(int key) {
    Node* node = new Node(key);
    return node;
}
void inOrder(Node* node, int array[], int& index) {
    if (node == nullptr) return;
    inOrder(node->left, array, index);
    array[index++] = node->key;
    inOrder(node->right, array, index);
}
Node* insert(Node* node, int key) {
    if (node == nullptr)
        return newNode(key);

    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}
void treeSort(int array[], int n) {
    Node* root = nullptr;
    for (int i = 0; i < n; i++) {
        root = insert(root, array[i]);
    }
    int index = 0;
    inOrder(root, array, index);
}