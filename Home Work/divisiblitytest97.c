#include <stdio.h>

int main () {
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    if(num % 97 == 0) printf("The number is divisible  by 97");
    else printf("The number is not divisible  by 97");
    return 0;
}