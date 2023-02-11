#include<stdio.h>

int main()
{
    int bin, hex=0, rem;
printf("Enter value :- ");
scanf("%d", &bin);

for(int i=1; bin>0; i*=2){
  rem = bin%10;
  hex = hex + rem*i;
  bin = bin/10;
}
printf("%d\n",hex);
printf("The hexadecimal value is :- %p", hex);

return 0;

}