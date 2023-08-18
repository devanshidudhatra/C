/*
  -> there are two types of memory allocation : static and dynamic
  -> static memory allocation is done when we write the program and declare variable its value
  -> but sometimes we need dynamic memory allocation 
  -> Dynamic memory allocation means -> it is a way to allocate memory to a data structure during the runtime
  -> there are 30 students initially
  -> the 3 more came the we do not need to make a new arrray of students again
  -> we can use dynamic memeory allocation
  -> we need functions to allocate and free memory dynamically
  -> add stdlib library for dma 
  -> malloc() : memory allocation
                it takes number of bytes that u want to add 
                then allocate it in memory
                and return it to a pointer of void type
                ptr = (int*) malloc(5 * sizeof(int));
                (int*) means type casting coz i dont want my pointer of void type
                it is like array when u print or add any character in dm
  -> calloc() : continuous memory allocation  
                if 20 bytes memory are taken then they are atored in continuos fashion
                it will initialize with 0
                ptr = (int*) calloc(5,sizeof(int)); 
                it also return void ptr so we have type casted
  -> free() : in very big we have a variable n and we have used it in 2nd line only then compiler we declare it as free variable after its usage in 2nd line                         
              it was coz memory was static. when u declare a dynamic variable compiler will take as free variable
              so it is done by programmer
              we use free() to free memory that is allocated using malloc & calloc
              free(ptr);
  -> realloc() : re-allocation
                 reallocate (increase or decrease)memory using the same pointer and size.
                 ptr = realloc(ptr,newSize);            
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int*) malloc(5 * sizeof(int));
    ptr[0]=1;
    ptr[1]=10;
    ptr[2]=100;
    ptr[3]=1000;
    ptr[4]=1;
    for(int i=0; i<5 ; i++){
        printf("%d\t" , ptr[i]);
    }

    //reallocation
    ptr = realloc(ptr,8);
    return 0;
}