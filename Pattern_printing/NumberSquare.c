#include <stdio.h>

int main () {
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++) { // i --> no. of rows
        for(int j = 1; j <= n; j++) { // j --> no. of column
            printf(" %d ",j) ;
        }
        printf("\n");
    }
    return 0;
}