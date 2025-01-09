#include <stdio.h>

int main () {
    int arr[] = {5,7,3,8,2,9,1,6};
    int n = sizeof(arr)/4;
    int sumeven = 0;
    int sumodd = 0;
    for(int i=0;i<n;i++) {
        if(i%2==0) sumeven = sumeven+arr[i];
        else sumodd = sumodd+arr[i];
    }
    printf("Sum of Even is %d\n",sumeven);
    printf("Sum of Odd is %d\n",sumodd);
    printf("Sum of Odd-Even is %d",sumodd-sumeven);
    return 0;
}