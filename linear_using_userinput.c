#include <stdio.h>

int linearsearch(int *arr, int size, int ele)
{
          for (int i = 0; i < size; i++)
          {
                    if (arr[i] == ele)
                    {
                              return i;
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
          printf("enter %d the element of the array:\n", size);
          for (int i = 0; i < size; i++)
          {
                    scanf("%d", &arr[i]);
          }
          int ele;
          printf("enter the element to search for: ");
          scanf("%d", &ele);
          int index = linearsearch(arr, size, ele);
          if (index == -1)
          {
                    printf("The element is not present in the array.");
          }
          else
          {
                    printf("The element is present at array[%d].", index);
          }
          return 0;
}
