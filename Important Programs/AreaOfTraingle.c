#include <stdio.h>

int main () {
    int Area,base,height;
    
    printf("Enter the base of triangle: ");
    scanf("%d",&base);
    printf("Enter the height of triangle: ");
    scanf("%d",&height);
    Area = (0.5 * base * height);
    printf("The area of triangle is %d",Area);

    return 0;
}