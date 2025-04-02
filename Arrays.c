#include <stdio.h>

int main(){

    //initaliza array
    int mat[3][3] = {{12, 8, 2}, {10, 9, 7}, {1, 2, 3}};

    int rowDimension = sizeof(mat) / sizeof(mat[0]);
    int colDimension = sizeof(mat[0]) / sizeof(int);

   

    for(int i = 0; i < rowDimension; i++){
        for(int j = 0; j < colDimension; j++){
        int num = mat[i][j];
        printf("%i ", num);
    }
}
    return 0;

}