//volume of cylinder
#include <stdio.h>

int main () {
    float pi = 3.14,height,radius,volume;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("Enter height: ");
    scanf("%f",&height);
    volume = pi * radius * radius * height;
    printf("The volume of cylinder is %f",volume);

    return 0;
}