//write a program to print n odd numbers in a file

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("odd.txt","w");

    int n;
    printf("Enter the number of odd numbers u want:");
    scanf("%d",&n);
    n=n+n;

    for(int i=1;i<=n;i++){
        if(i%2 != 0){
            fprintf(fptr,"%d\t",i);
        }
    }
    fclose(fptr);
    return 0;
}