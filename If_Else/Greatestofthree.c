#include <stdio.h>
int main()
{
    int a; 
    int b; 
    int c; 
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("Enter third number : ");
    scanf("%d", &c);
    if(a>=b && a>=c){
        printf("%d is greatest",a);
    }
    else if(b>=a && b>=c){
        printf("%d is greatest",b);
    }
    // if(c>=a && c>=b){
    //     printf("%d is greatest",c);
    // }
    else printf("C is greatest");
    return 0;
}