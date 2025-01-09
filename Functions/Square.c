#include <stdio.h>
#include <math.h>
int main () {
    int a;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    int root = sqrt(a);
    printf("The square root %d is  %d",a,root);

    return 0;
}