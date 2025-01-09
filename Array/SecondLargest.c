#include <stdio.h>
#include <limits.h>

int main () {
    int arr[7] = {4,6,2,8,9,1,5};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<7;i++) {
        if(max<arr[i]) {
            smax = max;
            max = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}