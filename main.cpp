#include <iostream>
using namespace std;
#include "heapSort.h"
#include "treeSort.h"

int main() {
    int arr1[] = { 7, 8, 1, 3, 10, 5,423,5,34,5,2,43,64,23,4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    cout << "massiv do sortirovki:\n";
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    heapSort(arr1, size1);

    cout << "massiv posle sortirovki:\n";
    for (int i = 0; i < size1; ++i) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    int arr2[] = {5, 4, 7, 2, 11, 1, 55, 40, 14, 3, 2, 67, 10, 66};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "massiv do sortirovki:\n";
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    treeSort(arr2, size2);

    cout << "massiv posle sortirovki:\n";
    for (int i = 0; i < size2; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}
