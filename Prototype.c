#include <stdio.h>


//function prototypes
int upperFunction(int, int);
void lowerFunction(char*);

int upperFunction(int numbe1, int number2){
    int sum = numbe1 + number2;
    lowerFunction("The numbers have been added");
    return sum;
}

void lowerFunction(char* string1){
    printf("%s\n", string1);
}


int main(){

    int sum  = upperFunction(4, 2);
}