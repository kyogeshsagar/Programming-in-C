#include <stdio.h>

void printArray(int *A, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void selectionSort(int *A, int n) {
    for (int i = 0; i < n - 1; i++) {
        int indexOfMin = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[indexOfMin]) {
                indexOfMin = j;
            }
        }
        int temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

int main() {
    int A[] = {23, 44, 67, 87, 90, 12, 78, 66};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the size of the array
    printf("Before sorting:\n");
    printArray(A, n);
    selectionSort(A, n);
    printf("After sorting:\n");
    printArray(A, n);
    return 0;
}
