#include <stdio.h>

int main () {
    int arr[5] = {23,43,56,76,20,};
    int min = arr[0];
    for(int i=1;i<5;i++) {
        if(min>arr[i]) {
            min = arr[i];
        }
    }
    printf("%d",min);
    return 0;
}