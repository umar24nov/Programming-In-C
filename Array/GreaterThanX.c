#include <stdio.h>

int main () {
    int arr[] = {34,56,76,89,25,90};
    int n = sizeof(arr)/4;
    int target = 50;
    int count = 0;
    for(int i=0;i<n;i++) {
        if(arr[i]>target) count++;
       
    }
    printf("%d",count);

    return 0;
}