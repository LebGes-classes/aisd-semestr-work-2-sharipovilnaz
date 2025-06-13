//
// Created by shari on 31.05.2025.
//
#include <iostream>
using namespace std;

void swap(int i, int j, int* array) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void add(int elem, int array[], int* size) {
    array[*size] = elem;
    (*size)++;

    int index = *size - 1;
    while (index > 0 && array[index] > array[(index-1) / 2]) {
        swap(index, (index-1) / 2, array);
        index = (index-1) / 2;
    }
}

int maxDel(int array[], int* size) {
    int ans = array[0];
    swap(0, *size - 1, array);
    (*size)--;

    int index = 0;
    int leftChild = 2 * index + 1;

    while (leftChild < *size) {
        int rightChild = leftChild + 1;
        if (rightChild < *size && array[rightChild] > array[leftChild])
            leftChild = rightChild;

        if (array[index] >= array[leftChild])
            break;

        swap(index, leftChild, array);
        index = leftChild;
        leftChild = 2 * index + 1;
    }

    return ans;
}
void heapSort(int array[], int n) {
    int size = 0;
    for (int i = 0; i < n; i++) {
        add(array[i], array, &size);
    }
    for (int i = n-1; i>=0; i--) {
        array[i] = maxDel(array, &size);
    }
}
