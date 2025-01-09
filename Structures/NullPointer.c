#include <stdio.h>

int main () {
    int *ptr = NULL;

    if(ptr == NULL ) printf("Pointer does not point to anything");
    else printf("Value pointed by printer: %d",*ptr);
    return 0;
}