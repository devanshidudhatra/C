#include<stdio.h>

int main(){
    int arr[10] = {3, 4, 5, 6, 7};
    int j = 5; 
    int k, item;
    
    printf("Enter position : ");
    scanf("%d", &k);
    
    printf("Enter item : ");
    scanf("%d", &item);

    // Shift elements to make space for the new item
    while (j >= k) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[k] = item;
    
    // Print the updated array
    for(int i = 0; i <= 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
