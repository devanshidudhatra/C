#include<stdio.h>
#include<string.h>

int main()
{
  char s[10];
  int ls;
  printf("Enter any string:");
  scanf("%s" , &s);

  ls = strlen(s);
  printf("%d\n" , ls);
  printf("Reverse string is:");
  for( int i=ls ; i>=0 ; i--)
  {
     printf("%c" , s[i]);
  }

// Alternate Method
   printf("\nReverse String is : %s" , strrev(s));
   return 0; 
}

