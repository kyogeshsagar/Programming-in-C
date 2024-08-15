void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void insertionsort(int *A, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main()
{
    int A[] = {23, 44, 67, 87, 90, 12, 78, 66};
    int n = 8;
    printf("Before sorting:\n");
    printarray(A, n);
    insertionsort(A, n);
    printf("After sorting:\n");
    printarray(A, n);
    return 0;
}
