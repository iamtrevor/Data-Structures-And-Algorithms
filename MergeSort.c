#include <stdio.h>
#include <stdlib.h> // For malloc and free

void merge(int arr[], int left, int mid, int right){
    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Allocate memory dynamically
    int* L = (int*)malloc(n1 * sizeof(int));
    int* R = (int*)malloc(n2 * sizeof(int));

    // Copy data to temp arrays L[] and R[]
    for(i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for(j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temp arrays back into arr[left..right]
    i = 0;
    j = 0;
    k = left;

    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if any
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if any
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }

    // Free allocated memory
    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right){
    if(left < right){
        int mid = left + (right - left) / 2;

        // Recursively sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// Function to print the array
void printArray(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(void){
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \n");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("Sorted array: \n");
    printArray(arr, size);

    return 0;
}

