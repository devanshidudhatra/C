#include<stdio.h>
#include<string.h>

int main()
{
    int num,i,b,temp;
    char  s[10];

    //Taking decimal number
    printf("Enter Any Number:");
    scanf("%d", &num);

    //Conversion
    //temp=0;
    
    for(i=0 ;num>0;i++)
    {
        s[i] = num % 2;
        num =  num/2;
        
      // temp++;
    }
    printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%d",s[i]);    
}    
return 0;  
}  


//     //printing of binary number ending with 1
//     if(s[temp] == 1)
//     {
//         for(i=temp ; i>=0 ; i--)
//         {
//             printf("%s" , s[i]);
//         }
//     }

//     //printing of binary number with 0
//     else{
//         printf("1");
//         for(i=temp ; i>=0 ; i--)
//         {
//             printf("%s" , s[i]);
//         }
//     }
//     return 0;
// }
