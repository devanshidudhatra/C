#include<stdio.h>
#include<string.h>

int main()
{
    int num,i,b,temp;
    char  a[100];

    //Taking decimal number
    printf("Enter Any Number:");
    scanf("%d", &num);

    //Conversion
    
    
    for(i=0 ;num>0;i++)
    {
        a[i] = num % 16;
        
        if(a[i] == 10)
        {
          a[i] = 'A';
        }
        else if(a[i] == 11)
        {
          a[i] = 'B';
        }
        else if(a[i] == 12)
        {
          a[i] = 'C';
        }
        else if(a[i] == 13)
        {
          a[i] = 'D';
        }
        else if(a[i] == 14)
        {
          a[i] = 'E';
        }
        else if(a[i] == 15)
        {
          a[i] = 'F';
        }
        else{
          a[i] = a[i];
        }
      
        num = num/16;
    }

//Printing of Hexadecimal
printf("\nHexadecimal of Given Number is=");    
for(i=i-1;i>=0;i--)    
{    
printf("%c\n",a[i]);    
}    

//Alternate method

int dec;
printf("Enter Decimal value:");
scanf("%d", &dec);
printf("%x" , dec);

return 0; 
}  
