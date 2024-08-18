#include <stdio.h>
void printarray(int *A, int n)
{
          for (int i = 0; i < n; i++)
          {
              if (i == n - 1) {
            printf("%d\n", A[i]);
        } else {
            printf("%d, ", A[i]);
        }
            
              
              
                    
          }
          printf("\n");
}
void selectionsort(int *A, int n,int k)
{
          for (int i = 0; i < k; i++)
          {
                    int indexofmin = i;
                    for (int j = i + 1; j < n; j++)
                    {
                              if (A[j] < A[indexofmin])
                              {
                                        indexofmin = j;
                              }
                    }
                    int temp = A[i];
                    A[i] = A[indexofmin];
                    A[indexofmin] = temp;
          }
}
int main()
{
          int n,k;
          scanf("%d",&n);
          scanf("%d",&k);
          int A[n];
          for(int i=0;i<n;i++){
              scanf("%d,",&A[i]);
          }
          
          
          selectionsort(A, n, k);
          printarray(A, n);
          return 0;
}
