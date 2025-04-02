#include <stdio.h>

int main(){

    //declare pointer to an integer type
    int* ptr;

    //declare variable x
    int x = 3;

    //assigns memory address of variable x to the pointer
    ptr = &x;

    //prints address of variable x
    printf("%p\n", ptr);
    
    int y = 14;
    ptr = &y; //reasigns pointer to memory address of variable y

    printf("%p\n", ptr);
    
}