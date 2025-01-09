#include <stdio.h>
#include <Math.h>

int main () {
    double a, b, c, discriminant, root1, root2;
    printf("Enter coefficients a, b, c,\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant = b*b-4*a*c;
    if(discriminant > 0) {
        root1 = (-b+sqrt(discriminant))/2*a;
        root2 = (-b-sqrt(discriminant))/2*a;
        printf("Root are real and distinct and values of them is\n");
        printf("Root1 is %lf\n",root1);
        printf("Root2 is %lf\n",root2);
    }
    else if(discriminant == 0) {
        root1 = root2 = -b/2*a;
        printf("Root are real and Equal and values of them is\n");
        printf("%lf",root1);
    }
    else {
        double realPart = - b / 2 * a;
        double imaginaryPart = sqrt(fabs(discriminant)) / 2*a;
        printf("Roots are imagnary and distinct and values of them\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }

    return 0;
}