#include <stdio.h>

int main () {
    int m;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    int n;
    printf("Enter number of column : ");
    scanf("%d",&n);
       for(int i = 1; i <= m ; i++) { // -->Outer loop signifies rows
        for (int i =1; i <= n; i++) { // -->Inner loop signifies column
        printf(" * ");
        }
       printf("\n");
       }
    return 0;
}