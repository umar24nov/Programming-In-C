#include <stdio.h>

int main () {
    int arr[9] = {1,2,3,4,5,6,7,8,9};
    int *ptr = arr;
    // printf("%d\n",ptr[0]);
    printf("%d",*(ptr + 1));
    return 0;
}