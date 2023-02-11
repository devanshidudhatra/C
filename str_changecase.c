#include<stdio.h>
#include<string.h>
void main(){
    char s[30];
    printf("enter str:");
    gets(s);
    for(int i=0;i<strlen(s);i++){
        if('a'<=s[i]&&s[i]<='z'){
            s[i]=s[i]-32;
        }
        else{
            s[i]=s[i]+32;
        }
    }
    puts(s);
}