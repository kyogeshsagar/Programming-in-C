#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to perform linear search
int linear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N;
    char input[1000];
    printf("Enter the size of the array: ");
    scanf("%d", &N);
    getchar(); // To consume the newline character after the integer input
    
    int arr[N];
    printf("Enter the elements of the array separated by comma: ");
    fgets(input, sizeof(input), stdin);
    
    // Parse the input string to extract array elements
    char *token = strtok(input, ",");
    for (int i = 0; i < N && token != NULL; i++) {
        arr[i] = atoi(token);
        token = strtok(NULL, ",");
    }
    
    int key;
    printf("Enter the key to be found: ");
    scanf("%d", &key);
    
    // Call linear search and print the result
    int result = linear_search(arr, N, key);
    printf("%d\n", result);
    
    return 0;
}
