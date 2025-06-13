//
// Created by shari on 31.05.2025.
//

#ifndef ALGORITHMS_HEAPSORT_H
#define ALGORITHMS_HEAPSORT_H

void swap(int i, int j, int* array);
void add(int elem, int array[], int* size);
int minDel(int array[], int* size);
int maxDel(int array[], int* size);
void heapSort(int array[], int n);

#endif //ALGORITHMS_HEAPSORT_H
