void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void bubblesort(int *A, int n)
{
    int i, j, temp;
    int flag = 1; // flag to check if any swap occurred in a pass

    for (i = 0; i < n - 1; i++)
    {
        flag = 0; // reset flag for each pass
        for (j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                flag = 1; // set flag if any swap occurred
            }
        }
        if (flag == 0) // if no swap occurred in a pass, array is already sorted
            break;
    }
}

int main()
{
    int A[] = {23, 44, 67, 87, 90, 12, 78, 66};
    int n = 8;
    printf("Before sorting:\n");
    printarray(A, n);
    bubblesort(A, n);
    printf("After sorting:\n");
    printarray(A, n);
    return 0;
}
