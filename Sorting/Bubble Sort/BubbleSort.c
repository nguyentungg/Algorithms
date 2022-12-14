// C Implementation

#include<stdio.h>

void bubbleSort(int *arr, int size) {
    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size - 1; j++) {
            /* Move the higher to the left */
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void main () {
    static int arr[10] = {10, 2, 7, 9, 8, 6, 3, 5, 4, 1};
    static int size = 10;

    printf("Previous array: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubbleSort(arr, size);
    printf("Sorted array: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}