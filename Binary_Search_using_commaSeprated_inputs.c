#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_sorted_array(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 405;
        }
    }
    return 1;
}

int binary_search(int arr[], int size, int key) {
    int low = 0, high = size - 1;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return -1;
}

int main() {
    int N;
    char input[1000];
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    getchar();
    
    int arr[N];
    printf("Enter the elements of the array separated by comma: ");
    fgets(input, sizeof(input), stdin);
    
    char *token = strtok(input, ",");
    for (int i = 0; i < N && token != NULL; i++) {
        arr[i] = atoi(token);
        token = strtok(NULL, ",");
    }
    
    int key;
    printf("Enter the key to be found: ");
    scanf("%d", &key);
    
    if (check_sorted_array(arr, N) == 1) {
        int result = binary_search(arr, N, key);
        printf("1\n%d\n", result);
    } else {
        printf("Error 405:: Wrong I/P\n");
    }
    
    return 0;
}
