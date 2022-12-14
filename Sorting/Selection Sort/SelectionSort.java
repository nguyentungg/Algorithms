// C Implementation

#include<stdio.h>

void selectionSort(int *arr, int size) {
    int i, j, temp, change, index;
    for (i = 0; i < size; i++) {
        temp = arr[i];
        change = 0;
        for (j = i + 1; j < size; j++) {
            /* Move the lower to the top */
            if (arr[j] < arr[i]) {
                temp = arr[j];
                index = j;
                change = 1;
            }
        }
        if(change) {
            arr[index] = arr[i];
            arr[i] = temp;
        }
    }
}

void selectionSort2(int *arr, int size) {
    int i, j, min;
    for (i = 0; i < size; i++) {
        min = i;
        for (j = i + 1; j < size; j++) {
            /* Move the lower to the top */
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if(min != i) {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
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

    selectionSort(arr, size);
    printf("Sorted array: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    selectionSort2(arr, size);
    printf("Sorted array: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}