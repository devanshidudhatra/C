//C program to print the elements of 3-D
// array using pointer notation
#include<stdio.h>
int main()
{
  int arr[3][3][4] = {
                       {
                         {5, 10, 11,5},
                         {6, 11, 2,5},
                         {7, 12, 4,8},
                       },
                       {
                         {20, 30, 4,2},
                         {21, 31, 78,3},
                         {22, 32, 90,45},
                       }

                     };
  int i, j, k;
  for (i = 0; i < 3; i++)
  {
    for (j = 0; j < 3; j++)
    {
       for (k = 0; k < 4; k++)
         printf("%d\t", *(*(*(arr + i) + j) +k));
       printf("\n");
    }
    printf("\n");
  }
 
  return 0;
}