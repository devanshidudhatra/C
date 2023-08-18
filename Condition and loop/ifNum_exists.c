#include<stdio.h>
int main(){
    int n;
    printf("Enter any number between 0-9 : ");
    scanf("%d",&n);
    int arr[] = {1,4,6,0,9};
    int temp =0;
    for(int i=0; i<5 ; i++){
        if (arr[i]==n){
            printf("Yess!! the number is present at %d index.",i);
            temp=1;
        }
    }
    if(temp==0){
        printf("Sorry!! the number is not in the array.");
    }
    return 0;
}
