#include <stdio.h>

int main () {
    char arr[] = "I am the best\0"; //although computer automatically puts \0 in the end
    int i=0;
    while(arr[i]!='\0') {
    printf("%c",arr[i]);
    i++;
    }
    
    return 0;
}