//Print addition,subtraction,division,multiplication by taking input from user
#include <stdio.h>
int main ()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("%d\n%d\n%d\n%d\n",a+b,a-b,a/b,a*b);
    
    return 0;
}
