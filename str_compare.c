#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30], s2[30];
    printf("Enter First String:");
    scanf("%s", s1);
    printf("Enter Second String:");
    scanf("%s" , s2);
    
    // First comparing length
    int l1,l2;
    l1 = strlen(s1);
    l2 = strlen(s2);
    if(l1 != l2){
        printf("Both Strings are not same.");
    }
    else {
        //Now Comparing String
        int e=0;
        for(int i=0 ; i<l1 ; i++){
            if(s1[i]==s2[i]){
                e++;
            } 
            else{
                printf("Strings are not same.");
                break;
            }
         }
        if(e==l1){
            printf("strings are same.");
        }
     }
    return 0;
}

