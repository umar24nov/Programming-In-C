#include <stdio.h>

int main () {
    int arr[7] = {45,54,67,36,89,45,200};
    int max = arr[0];
    for(int i=1;i<7;i++) {
        if(max<arr[i]) {
        max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}