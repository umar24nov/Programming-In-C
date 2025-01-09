#include <stdio.h>
#include <string.h>

int main () {
    char str[] = "Mohd Umar";
    int size = 0;
    // int i = 0;
    // while(str[i]!='\0') {
    //    size++;
    //    i++;
    // }
    // puts("The size of string is ");
    // printf("%d",size);
    for( int i = 0;str[i]!='\0';i++) {
       
       size++;
    }
    puts("The size of string is ");
    printf("%d",size);
   
    return 0;
}