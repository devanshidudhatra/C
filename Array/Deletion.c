#include<stdio.h>
int main(){
    int arr[10] = {1 , 2 , 3 , 4 , 5 , 6};
    int k,item;
    printf("Enter the index : ");
    scanf("%d" , &k);
    item = arr[k];
    for(int j =k ; j<=5 ; j++){
        arr[j] = arr[j+1];
    }
    for (int i =0 ; i<5 ; i++ ){
        printf("%d " , arr[i]);
    }
    return 0;
}