// C Implementation
#include<stdio.h>


void insertionSort(int * arr, int size) {
    int i, j, temp;

    for (i = 1; i < size; i++) {
        /* Save the last element */
        temp = arr[i];
        /* Shift the elements to the right when necessary */
        for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }
        /* Insert the saved element */
        arr[j + 1] = temp;
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

    insertionSort(arr, size);
    printf("Sorted array: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}