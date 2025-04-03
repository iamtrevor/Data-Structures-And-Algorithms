#include <stdio.h>

//function to perform selection sort
void selectionSort(int arr[], int n){
    int i, j, minIndex, temp;
    
    for(i = 0; i < n - 1; i++){
        minIndex = i;

        //find the minimum in the unsorted part
        for(j = i + 1; j < n; j++){ 
            if(arr[j] < arr[minIndex]){
                minIndex = j; 
            }
        }

        //Swap the found minimum element with the first element
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

//function to print array
void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array");
    printArray(arr, n);

    selectionSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
