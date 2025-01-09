#include <stdio.h>

int main () {
    int matrix[6][2] = {{1,2},{3,4},{4,5},{6,7},{7,8},{9,10}};
    for(int i=0; i<6; i++)  {  
    for(int j=0; j<2; j++){  
        printf("%d ",matrix[i][j]); 
    }  
    printf("\n");
}       
        int transpose[2][6];
         for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    
        printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}