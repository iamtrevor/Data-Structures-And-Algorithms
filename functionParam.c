#include <stdio.h>

void myFunc(int* a){
    *a = *a+2;
    printf("a insider myFunc(): %d\n", *a);
}

int main(void){
    int a = 10;
    int* aPointer = &a;
    myFunc(aPointer);
    printf("a in main(): %d\n", a);
}