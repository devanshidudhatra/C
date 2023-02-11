//we have two types of memory : volatile(RAM) and non-volatile(HARD DISK) 
//when we shut down our computer then volatile memory goes and non- volatile memory stays
//like as we have downloaded vs code when we shut down our computer then memory will not be erased
//data transfer happens between both this
//programs are present in ram and files in hard disk
//FILE is a storage device to store data
//operation that can happen: create,open , close, read,write
//types of files: text files(.txt,.c) and binary files(.exe,.mp3,.jpg)
//here text files are used

//file pointer is used to access the file
//FILE is a hiddenn structure that needs to be created for opening a file 
//Syntax: FILE *fptr;

//opening a file
//fptr = fopen("filename" , mode);
//modes: r=read ; rb=read in binary ; w=write ; wb=wrtie in binary ; a=open in append
//r nad rb will store null if file does not exist 
//w and wb will create the file does not exist
//in w and wb if we add any thing then first all data will be erased then the new one will be added
//but in a new data will be added
 
//closing a file
//fclose(fptr);

//reading a file
//fscanf(fptr,"format specifier",&variable)
//fgetc(fptr) for reading each character

//writing a file
//fprintf(fptr,"format specifier",variable);
//fputc('character that u want to add',fptr);

//EOF means end of file 
//when a function returns this value it means that now the whole file is readed and nothing is left

# include <stdio.h>

int main(){
    FILE *fptr;
    char ch;
    fptr = fopen("Hello.txt" , "r");
    fscanf(fptr,"%c",&ch);
    printf("%c", ch);
    fclose(fptr);
    return 0;
}
