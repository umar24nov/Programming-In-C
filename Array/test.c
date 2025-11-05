#include <stdio.h>
int main() {
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    // printf("Enter array elemnts : ");
    // for(int i = 0; i < size; i++) {
    //     scanf("%d",&arr[i]);
    // }
    printf("Array elements are : ");
    for(int i = 0; i < size; i++ ) {
        printf("%d  ",arr[i]);
    }

    
}