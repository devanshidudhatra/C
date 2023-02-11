#include<stdio.h>

int main()
{
    
    // int a = 3;
    // printf("%d \t %d \t %d \t" , a , ++a , a++);
    // printf("%d" , a);
    // printf("%d" , ++a);
    // printf("%d" , a++);

    
    int data[5];

    printf("Enter elements: ");
    for (int i = 0; i < 5; i++)
        scanf("%d", data + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(data + i));
   

    return 0;
}    