#include <stdio.h>

int main () {
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int product = 1;
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        product = product*arr[i];
    }
       printf("%d",product);
    return 0;
}