#include <iostream>
#define SIZE 5

void printArr(int *arr, int size);

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    printArr(arr, SIZE);

    return 0;
}

void printArr(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}