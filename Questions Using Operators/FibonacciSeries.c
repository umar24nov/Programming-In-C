// Fibonacci series : 1 1 2 3 5 8 13 21 34 55 89 144
// We have to print the sum of Fibonacci series
#include <stdio.h>
int main () {
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);
    int a = 1; 
    int b = 1;
    int sum = 1;
    for(int i = 1; i <= n-2; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }
    printf("The %dth fibonacci term is : %d",n,sum);
    return 0;
}