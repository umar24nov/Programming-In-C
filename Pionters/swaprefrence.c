#include <stdio.h>
void swap(int *x,int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}

int main () {
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("Swapped value is %d and %d",a,b);
    return 0;
}