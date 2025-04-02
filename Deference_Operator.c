#include <stdio.h>

int main(){
    //accessing the value stored in a pointer

    int x = 10;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("the value using pointer: %d\n", *ptr);

    //modifying value through a pointer
    *ptr = 20; 

    printf("the updated value of x: %d\n", x);


}