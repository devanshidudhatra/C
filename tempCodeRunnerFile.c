#include<stdio.h>

int main(){
    int arr[10] = {3, 4, 5, 6, 7};
    int j = 6; // Initial size of the array (assuming you have 5 elements already)
    int k, item;
    
    printf("Enter position : ");
    scanf("%d", &k);
    
    // Check if k is a valid position
    if (k < 0 || k > j + 1) {
        printf("Invalid position!\n");
        return 1; // Exit with an error code
    }

    printf("Enter item : ");
    scanf("%d", &item);

    // Shift elements to make space for the new item
    while (j >= k) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[k] = item;
    
    // Print the updated array
    for(int i = 0; i <= j+1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
