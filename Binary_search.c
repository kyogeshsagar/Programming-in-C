#include <stdio.h>

int binarySearch(int *arr, int size, int ele)
{
    int low, high, mid;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size;
    printf("enter the size of the array :");
    scanf("%d", &size);
    int arr[size];
    printf("enter the %d elements of the array :\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    // Binary search requires the array to be sorted
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int ele;
    printf("enter the element to search for: ");
    scanf("%d", &ele);
    int index = binarySearch(arr, size, ele);
    if (index == -1)
    {
        printf("The element is not present in the array.\n");
    }
    else
    {
        printf("The element %d was found at index %d.\n", ele, index);
    }
    return 0;
}
