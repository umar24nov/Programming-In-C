#include <stdio.h>

int main () {
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    float area = 3.1415 * radius * radius ;
    printf("The area of circle is %f",area);
    return 0;
}

