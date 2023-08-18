#include<stdio.h>
void main(){
    FILE *fptr;
    fptr=fopen("struct_vector.c","r");
    char ch;
    ch=fgetc(fptr);
    while(1){
       if(ch!=EOF){
       printf("%c",ch);
       ch=fgetc(fptr);
       }
        
    }
    fclose(fptr);
}