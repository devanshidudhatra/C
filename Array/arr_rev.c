// #include<stdio.h>

// int main(){
//     int arr[] = {34,76,9,4,56,0};
//     int l = sizeof(arr)/sizeof(arr[0]);
//     int ed = l-1;
//     int i=0;
//     while ( i<ed){
//         int temp = arr[i];
//         arr[i]= arr[ed];
//         arr[ed]=temp;
//         ed-- ; 
//         i++ ; 
//     }
//     printf("Reverse array is : ");
//     for (int i=0 ; i<l ; i++){
//         printf("%d " ,arr[i] );
//     }
//     return 0;
// }

// C program to find second largest
// element in an array

#include <limits.h>
#include <stdio.h>

/* Function to print the second largest elements */
void print2largest(int arr[], int arr_size)
{
	int i, first, second;

	/* There should be atleast two elements */
	if (arr_size < 2) {
		printf(" Invalid Input ");
		return;
	}

	first = second = INT_MIN;
	for (i = 0; i < arr_size; i++) {
		/* If current element is greater than first
		then update both first and second */
		if (arr[i] > first) {
			second = first;
			first = arr[i];
		}

		/* If arr[i] is in between first and
		second then update second */
		else if (arr[i] > second && arr[i] != first)
			second = arr[i];
	}
	if (second == INT_MIN)
		printf("There is no second largest element\n");
	else
		printf("The second largest element is %d", second);
}

/* Driver program to test above function */
int main()
{
	int arr[] = { 120, 350, 410, 10, 300, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);
	print2largest(arr, n);
	return 0;
}
