#include <stdio.h> 
int main() {
    int a = 5,b = 8;
    int *x = &a;
    int *y = &b; //int* used to store adress 
    printf("%p",&a); //%p id used to print address of pointer
   return 0;
} 