#include <stdio.h>

int main () {
    int arr[5] = {1,4,3,2,1};
    for(int i=0;i<5;i++) {
    printf("%p\n",&arr[i]);
    }
    return 0;
}