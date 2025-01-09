#include <stdio.h>

int main () {
    int length,breath,area;
    printf("Enter length: ");
    scanf("%d",&length);
    printf("Enter breath: ");
    scanf("%d",&breath);
    area = length * breath;
    printf("The area of rectangle is %d",area);
    return 0;
}