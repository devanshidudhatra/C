#include<stdio.h>
#include<string.h>

int main()
{
   int i;
   char *s[3] = {"hello" , "hi" , "I"};
   
//    printf("Enter any string:");
//    scanf("%s" , &s);
   //char *ptr = s;
   for(i=0 ; i<3 ; i++)
   {
    printf("%s\n" , s[i]);
    printf("%p\n" , s[i]);
   }
   return 0;
}